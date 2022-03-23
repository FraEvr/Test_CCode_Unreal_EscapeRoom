// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabSystemComponent.h"
#include "DrawDebugHelpers.h"

#define PrintStringOnScreen(_string) GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, _string);

UGrabSystemComponent::UGrabSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UGrabSystemComponent::BeginPlay()
{
	Super::BeginPlay();	
}


void UGrabSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Si le joueur a r�cup�r� un objet (donc si il y a un acteur dans la variable "pickedActor")
	if (pickedUpActor)
	{
		//R�cup�ration du vecteur avant du joueur et de sa position
		FVector forwardVector = playerActor->GetActorForwardVector();
		FVector startLocation = playerActor->GetActorLocation();

		//Cr�ation de la position o� devrait se trouver le cube
		FVector locationPoint = (forwardVector * 250.f) + startLocation;
		
		//Attribution de la position et de la rotation de l'objet r�cup�r� par rapport au point cr�� pr�c�demment et � la rotation du joueur
		pickedUpActor->SetActorLocationAndRotation(locationPoint, GetOwner()->GetActorRotation());
	}
}

void UGrabSystemComponent::Grab()
{
	if (pickedUpActor)
	{
		pickedUpActorMesh->SetEnableGravity(true);
		pickedUpActorMesh->BodyInstance.bLockRotation = false;
		pickedUpActorMesh = NULL;
		pickedUpActor = NULL;
	}
	else
	{
		//Cr�ation d'une variable stockant les r�sultats du rayon
		FHitResult* hit = new FHitResult();

		//R�cup�ration du vecteur avant du joueur, de la position du joueur et de la limite du rayon
		FVector forwardVector = playerActor->GetActorForwardVector();
		FVector startLocation = playerActor->GetActorLocation();
		FVector endLocation = (forwardVector * 1000.f) + startLocation;

		//Cr�ation d'un param�tre �vitant que le rayon soit interrompu par la hitbox joueur
		FCollisionQueryParams col;
		col.AddIgnoredActor(playerActor);

		//Si le rayon (compl�t� par l'ensemble des variables d�finies pr�c�demment dans cette fonction) touche un objet et ...
		if (GetWorld()->LineTraceSingleByChannel(*hit, startLocation, endLocation, ECC_WorldStatic, col))
		{
			//Ligne de d�bug pour voir le rayon tir�
			//DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Orange, true);

			//... Si le collider touch� comprend un objet et ...
			if (hit->GetActor() != NULL)
			{
				//... Si l'objet touch� poss�de des tags et ...
				if (hit->GetActor()->Tags.Num() > 0)
				{
					//... Si le premier tag de l'acteur touch� le d�finit comme un objet r�cup�rable ...
					if (hit->GetActor()->Tags[0] == "Interactable")
					{
						//... Alors, on attribue l'acteur touch� � la variable "pickedActor" pour indiqu� qu'on l'a r�cup�r�
						pickedUpActor = Cast<AActor>(hit->GetActor());
						//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My name is: %s"), *pickedUpActor->GetName()));

						//On r�cup�re l'ensemble des composants "StaticMeshComponent" de l'objet
						TArray<UStaticMeshComponent*> comps;
						pickedUpActor->GetComponents(comps);

						//Si l'objet poss�de au moins une r�f�rence du component ...
						if (comps.Num() > 0)
						{
							//... Alors, on r�cup�re ce composant et on l'attribue � la variable de stockage "pickedUpActorMesh"
							pickedUpActorMesh = comps[0];
						}

						//On bloque la gravit� de l'objet et sa rotation pour �viter qu'il aille dans tous les sens pendant qu'on le d�place
						pickedUpActorMesh->BodyInstance.bLockRotation = true;
						pickedUpActorMesh->SetEnableGravity(false);
					}
				}
			}
		}
	}
}


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

	//Si le joueur a récupéré un objet (donc si il y a un acteur dans la variable "pickedActor")
	if (pickedUpActor)
	{
		//Récupération du vecteur avant du joueur et de sa position
		FVector forwardVector = playerActor->GetActorForwardVector();
		FVector startLocation = playerActor->GetActorLocation();

		//Création de la position où devrait se trouver le cube
		FVector locationPoint = (forwardVector * 250.f) + startLocation;
		
		//Attribution de la position et de la rotation de l'objet récupéré par rapport au point créé précédemment et à la rotation du joueur
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
		//Création d'une variable stockant les résultats du rayon
		FHitResult* hit = new FHitResult();

		//Récupération du vecteur avant du joueur, de la position du joueur et de la limite du rayon
		FVector forwardVector = playerActor->GetActorForwardVector();
		FVector startLocation = playerActor->GetActorLocation();
		FVector endLocation = (forwardVector * 1000.f) + startLocation;

		//Création d'un paramètre évitant que le rayon soit interrompu par la hitbox joueur
		FCollisionQueryParams col;
		col.AddIgnoredActor(playerActor);

		//Si le rayon (complêté par l'ensemble des variables définies précédemment dans cette fonction) touche un objet et ...
		if (GetWorld()->LineTraceSingleByChannel(*hit, startLocation, endLocation, ECC_WorldStatic, col))
		{
			//Ligne de débug pour voir le rayon tiré
			//DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Orange, true);

			//... Si le collider touché comprend un objet et ...
			if (hit->GetActor() != NULL)
			{
				//... Si l'objet touché possède des tags et ...
				if (hit->GetActor()->Tags.Num() > 0)
				{
					//... Si le premier tag de l'acteur touché le définit comme un objet récupérable ...
					if (hit->GetActor()->Tags[0] == "Interactable")
					{
						//... Alors, on attribue l'acteur touché à la variable "pickedActor" pour indiqué qu'on l'a récupéré
						pickedUpActor = Cast<AActor>(hit->GetActor());
						//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My name is: %s"), *pickedUpActor->GetName()));

						//On récupère l'ensemble des composants "StaticMeshComponent" de l'objet
						TArray<UStaticMeshComponent*> comps;
						pickedUpActor->GetComponents(comps);

						//Si l'objet possède au moins une référence du component ...
						if (comps.Num() > 0)
						{
							//... Alors, on récupère ce composant et on l'attribue à la variable de stockage "pickedUpActorMesh"
							pickedUpActorMesh = comps[0];
						}

						//On bloque la gravité de l'objet et sa rotation pour éviter qu'il aille dans tous les sens pendant qu'on le déplace
						pickedUpActorMesh->BodyInstance.bLockRotation = true;
						pickedUpActorMesh->SetEnableGravity(false);
					}
				}
			}
		}
	}
}


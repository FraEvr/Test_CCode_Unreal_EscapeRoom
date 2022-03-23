// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatorCubeSystem.h"
#include "DrawDebugHelpers.h"

#define PrintStringOnScreen(_string) GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, _string);

URotatorCubeSystem::URotatorCubeSystem()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void URotatorCubeSystem::BeginPlay()
{
	Super::BeginPlay();
}


void URotatorCubeSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void URotatorCubeSystem::RotateCube() 
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
			//Debug du nom de l'objet touch�
			//PrintStringOnScreen(hit->GetActor()->GetName());

			//... Si l'objet touch� poss�de des tags et ...
			if (hit->GetActor()->Tags.Num() > 0)
			{
				//... Si le premier tag de l'acteur touch� le d�finit comme un cube pouvant �tre tourn� ...
				if (hit->GetActor()->Tags[0].ToString() == "RotatorCube")
				{
					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My name is: %s"), *hit->GetActor()->GetName()));

					//... Alors, on r�cup�re le cube et on le fait tourner sur l'axe Y (Pitch) de 45�
					FRotator actorRot = hit->GetActor()->GetActorRotation();
					actorRot.Pitch += 45.f;
					hit->GetActor()->SetActorRotation(actorRot);
				}
			}
		}
	}
}


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
			//Debug du nom de l'objet touché
			//PrintStringOnScreen(hit->GetActor()->GetName());

			//... Si l'objet touché possède des tags et ...
			if (hit->GetActor()->Tags.Num() > 0)
			{
				//... Si le premier tag de l'acteur touché le définit comme un cube pouvant être tourné ...
				if (hit->GetActor()->Tags[0].ToString() == "RotatorCube")
				{
					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My name is: %s"), *hit->GetActor()->GetName()));

					//... Alors, on récupère le cube et on le fait tourner sur l'axe Y (Pitch) de 45°
					FRotator actorRot = hit->GetActor()->GetActorRotation();
					actorRot.Pitch += 45.f;
					hit->GetActor()->SetActorRotation(actorRot);
				}
			}
		}
	}
}


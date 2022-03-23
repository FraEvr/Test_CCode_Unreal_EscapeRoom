// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerVolume.h"
#include "DrawDebugHelpers.h"
#include "Engine/BrushShape.h"

#define PrintStringOnScreen(_string) GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, _string);

AMyTriggerVolume::AMyTriggerVolume() 
{
	//Association de mes fonctions d'entrée et de sortie du trigger
	OnActorBeginOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapEnd);
}

void AMyTriggerVolume::BeginPlay()
{
	Super::BeginPlay();

	//Affichage des "limites" du trigger
	DrawDebugBox(GetWorld(), GetActorLocation(), Brush->Bounds.BoxExtent, FColor::Orange, true, -1, 0, 5);
}

void AMyTriggerVolume::OnOverlapBegin(class AActor* overlappedActor, class AActor* otherActor) 
{
	//Lorsqu'un autre acteur entre en collision avec le trigger et que cet autre acteur n'est pas le trigger en lui même ...
	if (otherActor && (otherActor != this))
	{
		//Si cet acteur correspond à l'acteur nécessaire à l'activation du trigger ...
		if (otherActor == matchActor)
		{
			//PrintStringOnScreen("Overlap Begin");

			//Ouverture de la porte en la faisant tourner de 90° sur l'axe Z (Yaw) 
			FRotator doorRot = door->GetActorRotation();
			doorRot.Yaw = 90.f;
			door->SetActorRotation(doorRot);
		}
	}
}

void AMyTriggerVolume::OnOverlapEnd(class AActor* overlappedActor, class AActor* otherActor)
{
	//Lorsqu'un autre acteur entre en collision avec le trigger et que cet autre acteur n'est pas le trigger en lui même ...
	if (otherActor && (otherActor != this))
	{
		//Si cet acteur correspond à l'acteur nécessaire à l'activation du trigger ...
		if (otherActor == matchActor)
		{
			//PrintStringOnScreen("Overlap End");

			//Fermeture de la porte en remettant l'axe Z (Yaw) à 0°
			FRotator doorRot = door->GetActorRotation();
			doorRot.Yaw = 0.f;
			door->SetActorRotation(doorRot);
		}
	}
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerVolume.h"
#include "DrawDebugHelpers.h"
#include "Engine/BrushShape.h"

#define PrintStringOnScreen(_string) GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, _string);

AMyTriggerVolume::AMyTriggerVolume() 
{
	OnActorBeginOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapEnd);
}

void AMyTriggerVolume::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), Brush->Bounds.BoxExtent, FColor::Orange, true, -1, 0, 5);
}

void AMyTriggerVolume::OnOverlapBegin(class AActor* overlappedActor, class AActor* otherActor) 
{
	if (otherActor && (otherActor != this))
	{
		if (otherActor == matchActor)
		{
			PrintStringOnScreen("Overlap Begin");
		}
	}
}

void AMyTriggerVolume::OnOverlapEnd(class AActor* overlappedActor, class AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		if (otherActor == matchActor)
		{
			PrintStringOnScreen("Overlap End");
		}
	}
}
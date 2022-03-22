// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "MyTriggerVolume.generated.h"

/**
 * 
 */
UCLASS()
class CCODE_API AMyTriggerVolume : public ATriggerVolume
{
	GENERATED_BODY()

public :
	AMyTriggerVolume();

	UPROPERTY(EditAnywhere)
	AActor* matchActor;

protected :
	virtual void BeginPlay() override;

private :
	UFUNCTION()
	void OnOverlapBegin(class AActor* overlappedActor, class AActor* otherActor);
	
	UFUNCTION()
	void OnOverlapEnd(class AActor* overlappedActor, class AActor* otherActor);
};

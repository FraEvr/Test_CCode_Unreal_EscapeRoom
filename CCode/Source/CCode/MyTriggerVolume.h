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
	//Constructeur
	AMyTriggerVolume();

	//Variable stockant l'acteur devant être associé au trigger pour l'activer
	UPROPERTY(EditAnywhere)
	AActor* matchActor;

	//Variable de la porte devant s'ouvrir grâce à l'activation du trigger
	UPROPERTY(EditAnywhere)
	AActor* door;

protected :
	virtual void BeginPlay() override;

private :
	UFUNCTION()
	void OnOverlapBegin(class AActor* overlappedActor, class AActor* otherActor);
	
	UFUNCTION()
	void OnOverlapEnd(class AActor* overlappedActor, class AActor* otherActor);
};

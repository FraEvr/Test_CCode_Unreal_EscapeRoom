// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RotatorCubeSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CCODE_API URotatorCubeSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	//Constructeur
	URotatorCubeSystem();

	//Fonction de rotation des cubes
	void RotateCube();

	AActor* playerActor;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

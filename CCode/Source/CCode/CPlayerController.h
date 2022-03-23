// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MainPlayerCharacter.h"
#include "GrabSystemComponent.h"
#include "RotatorCubeSystem.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CCODE_API ACPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACPlayerController();

	//Variable de r�f�rence � mon syst�me de grab
	UGrabSystemComponent* grabComponent;

	//Variable de r�f�rence � mon syst�me de rotation de cubes
	URotatorCubeSystem* rotatorCubeSystem;

	//Variable de r�f�rence � joueur
	AMainPlayerCharacter* mainCharacterActor;

protected:
	virtual void BeginPlay() override;

	//Fonction de d�placement avant/arri�re en fonction d'une valeur donn�e
	void MoveForwardBackward(float _value);

	//Fonction de d�placement gauche/droite en fonction d'une valeur donn�e
	void MoveLeftRight(float _value);

	//Fonction appellant le saut
	void PerformJump();

	//Fonction appellant le grab
	void Grab();

	//Fonction appellant le syst�me de rotation de cubes
	void ActivateRotatorCube();

public:
	virtual void Tick(float DeltaTime) override;
	void SetupInputComponent() override;
};

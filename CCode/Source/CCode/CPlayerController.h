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

	//Variable de référence à mon système de grab
	UGrabSystemComponent* grabComponent;

	//Variable de référence à mon système de rotation de cubes
	URotatorCubeSystem* rotatorCubeSystem;

	//Variable de référence à joueur
	AMainPlayerCharacter* mainCharacterActor;

protected:
	virtual void BeginPlay() override;

	//Fonction de déplacement avant/arrière en fonction d'une valeur donnée
	void MoveForwardBackward(float _value);

	//Fonction de déplacement gauche/droite en fonction d'une valeur donnée
	void MoveLeftRight(float _value);

	//Fonction appellant le saut
	void PerformJump();

	//Fonction appellant le grab
	void Grab();

	//Fonction appellant le système de rotation de cubes
	void ActivateRotatorCube();

public:
	virtual void Tick(float DeltaTime) override;
	void SetupInputComponent() override;
};

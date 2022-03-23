// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainPlayerCharacter.generated.h"

UCLASS()
class CCODE_API AMainPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainPlayerCharacter();

	//---------------------------------------------
	//FONCTIONS APPELLEES DANS LE PLAYER CONTROLLER
	//---------------------------------------------
	
	//Fonction de déplacement avant/arrière en fonction d'une valeur donnée
	void MoveForwardBackward(float _value);

	//Fonction de déplacement gauche/droite en fonction d'une valeur donnée
	void MoveLeftRight(float _value);

	//Fonction appellant le saut
	void PerformJump();

protected:
	virtual void BeginPlay() override;

	

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

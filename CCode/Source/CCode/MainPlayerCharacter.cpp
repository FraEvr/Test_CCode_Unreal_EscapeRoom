// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerCharacter.h"
#include "DrawDebugHelpers.h"

AMainPlayerCharacter::AMainPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}


void AMainPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}


void AMainPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AMainPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

//Fonction de d�placement avant/arri�re en fonction d'une valeur donn�e
void AMainPlayerCharacter::MoveForwardBackward(float _value) 
{
	AddMovementInput(GetActorForwardVector()* _value);
}

//Fonction de d�placement gauche/droite en fonction d'une valeur donn�e
void AMainPlayerCharacter::MoveLeftRight(float _value)
{
	AddMovementInput(GetActorRightVector() * _value);
}

//Fonction appellant le saut
void AMainPlayerCharacter::PerformJump()
{
	Jump();
}
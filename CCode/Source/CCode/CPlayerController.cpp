// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayerController.h"

// Sets default values
ACPlayerController::ACPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}


void ACPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//R�cup�ration de mon mainCharacter (PlayerCharacter)
	mainCharacterActor = Cast<AMainPlayerCharacter>(GetPawn());

	//Cr�ation et attribution de mon syst�me de grab au joueur
	grabComponent = NewObject<UGrabSystemComponent>(this, UGrabSystemComponent::StaticClass(), TEXT("GrabComponent"));

	grabComponent->playerActor = mainCharacterActor;

	if (grabComponent)
	{
		grabComponent->RegisterComponent();
	}

	//Cr�ation et attribution de mon syst�me de rotation de cubes au joueur
	rotatorCubeSystem = NewObject<URotatorCubeSystem>(this, URotatorCubeSystem::StaticClass(), TEXT("RotatorCubeSystem"));

	rotatorCubeSystem->playerActor = mainCharacterActor;

	if (rotatorCubeSystem)
	{
		rotatorCubeSystem->RegisterComponent();
	}
}


void ACPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


//Fonction appellant le d�placement avant/arri�re en fonction d'une valeur donn�e pr�sent dans le PlayerCharacter
void ACPlayerController::MoveForwardBackward(float _value) 
{
	mainCharacterActor->MoveForwardBackward(_value);
}


//Fonction appellant le d�placement gauche/droite en fonction d'une valeur donn�e pr�sent dans le PlayerCharacter
void ACPlayerController::MoveLeftRight(float _value) 
{
	mainCharacterActor->MoveLeftRight(_value);
}


//Fonction appellant le saut du PlayerCharacter
void ACPlayerController::PerformJump()
{
	mainCharacterActor->PerformJump();
}


//Fonction appellant la fonction de grab de cubes pr�sentes dans le "grabComponent" (component de grab)
void ACPlayerController::Grab() 
{
	grabComponent->Grab();
}


//Fonction appellant la fonction de rotation de cubes pr�sentes dans le "RotatorCubeSystem" (component de rotation des cubes)
void ACPlayerController::ActivateRotatorCube() 
{
	rotatorCubeSystem->RotateCube();
}


void ACPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//Attribution des fonctions correspondantes aux inputs d�finis dans la section "Input" des Project Settings
	InputComponent->BindAxis(TEXT("ForwardBackward"), this, &ACPlayerController::MoveForwardBackward);
	InputComponent->BindAxis(TEXT("LeftRight"), this, &ACPlayerController::MoveLeftRight);
	InputComponent->BindAxis(TEXT("Turn"), this, &ACPlayerController::AddYawInput);
	InputComponent->BindAxis(TEXT("LookUp"), this, &ACPlayerController::AddPitchInput);

	InputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACPlayerController::PerformJump);
	InputComponent->BindAction(TEXT("Grab"), IE_Pressed, this, &ACPlayerController::Grab);
	InputComponent->BindAction(TEXT("RotateCube"), IE_Pressed, this, &ACPlayerController::ActivateRotatorCube);
}
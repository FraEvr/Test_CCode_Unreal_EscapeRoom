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

	//Récupération de mon mainCharacter (PlayerCharacter)
	mainCharacterActor = Cast<AMainPlayerCharacter>(GetPawn());

	//Création et attribution de mon système de grab au joueur
	grabComponent = NewObject<UGrabSystemComponent>(this, UGrabSystemComponent::StaticClass(), TEXT("GrabComponent"));

	grabComponent->playerActor = mainCharacterActor;

	if (grabComponent)
	{
		grabComponent->RegisterComponent();
	}

	//Création et attribution de mon système de rotation de cubes au joueur
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


//Fonction appellant le déplacement avant/arrière en fonction d'une valeur donnée présent dans le PlayerCharacter
void ACPlayerController::MoveForwardBackward(float _value) 
{
	mainCharacterActor->MoveForwardBackward(_value);
}


//Fonction appellant le déplacement gauche/droite en fonction d'une valeur donnée présent dans le PlayerCharacter
void ACPlayerController::MoveLeftRight(float _value) 
{
	mainCharacterActor->MoveLeftRight(_value);
}


//Fonction appellant le saut du PlayerCharacter
void ACPlayerController::PerformJump()
{
	mainCharacterActor->PerformJump();
}


//Fonction appellant la fonction de grab de cubes présentes dans le "grabComponent" (component de grab)
void ACPlayerController::Grab() 
{
	grabComponent->Grab();
}


//Fonction appellant la fonction de rotation de cubes présentes dans le "RotatorCubeSystem" (component de rotation des cubes)
void ACPlayerController::ActivateRotatorCube() 
{
	rotatorCubeSystem->RotateCube();
}


void ACPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//Attribution des fonctions correspondantes aux inputs définis dans la section "Input" des Project Settings
	InputComponent->BindAxis(TEXT("ForwardBackward"), this, &ACPlayerController::MoveForwardBackward);
	InputComponent->BindAxis(TEXT("LeftRight"), this, &ACPlayerController::MoveLeftRight);
	InputComponent->BindAxis(TEXT("Turn"), this, &ACPlayerController::AddYawInput);
	InputComponent->BindAxis(TEXT("LookUp"), this, &ACPlayerController::AddPitchInput);

	InputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACPlayerController::PerformJump);
	InputComponent->BindAction(TEXT("Grab"), IE_Pressed, this, &ACPlayerController::Grab);
	InputComponent->BindAction(TEXT("RotateCube"), IE_Pressed, this, &ACPlayerController::ActivateRotatorCube);
}
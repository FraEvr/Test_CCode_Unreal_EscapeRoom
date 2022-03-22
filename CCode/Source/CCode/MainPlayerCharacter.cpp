// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerCharacter.h"
#include "DrawDebugHelpers.h"

// Sets default values
AMainPlayerCharacter::AMainPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (pickedUpActor)
	{
		FVector forwardVector = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetActorForwardVector();
		FVector startLocation = GetActorLocation();

		FVector locationPoint = (forwardVector * 250.f) + startLocation;

		pickedUpActor->SetActorLocationAndRotation(locationPoint, this->GetActorRotation());
	}


}

// Called to bind functionality to input
void AMainPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("ForwardBackward"), this, &AMainPlayerCharacter::MoveForwardBackward);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMainPlayerCharacter::MoveLeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMainPlayerCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMainPlayerCharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AMainPlayerCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Grab"), IE_Pressed, this, &AMainPlayerCharacter::Grab);
}

void AMainPlayerCharacter::MoveForwardBackward(float _value) 
{
	AddMovementInput(GetActorForwardVector()* _value);
}

void AMainPlayerCharacter::MoveLeftRight(float _value)
{
	AddMovementInput(GetActorRightVector() * _value);
}

void AMainPlayerCharacter::Grab() 
{
	if (pickedUpActor)
	{
		pickedUpActorMesh->SetEnableGravity(true);
		pickedUpActorMesh->BodyInstance.bLockRotation = false;
		pickedUpActorMesh = NULL;
		pickedUpActor = NULL;
	}
	else
	{
		FHitResult* hit = new FHitResult();

		FVector forwardVector = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetActorForwardVector();
		FVector startLocation = GetActorLocation();

		FVector endLocation = (forwardVector * 1000.f) + startLocation;

		FCollisionQueryParams col;
		col.AddIgnoredActor(this);

		if (GetWorld()->LineTraceSingleByChannel(*hit, startLocation, endLocation, ECC_WorldStatic, col))
		{
			DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Orange, true);

			if (hit->GetActor() != NULL)
			{
				if (hit->GetActor()->Tags.Num() > 0)
				{
					if (hit->GetActor()->Tags[0] == "Interactable")
					{
						//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My name is: %s"), *hit->GetActor()->Tags[0].ToString()));
						pickedUpActor = Cast<AActor>(hit->GetActor());
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My name is: %s"), *pickedUpActor->GetName()));

						TArray<UStaticMeshComponent*> comps;
						pickedUpActor->GetComponents(comps);

						if (comps.Num() > 0)
						{
							pickedUpActorMesh = comps[0];
						}

						pickedUpActorMesh->BodyInstance.bLockRotation = true;
						pickedUpActorMesh->SetEnableGravity(false);
					}

					if (hit->GetActor()->Tags[0].ToString() == "RotatorCube")
					{
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My name is: %s"), *hit->GetActor()->Tags[0].ToString()));
						FRotator actorRot = hit->GetActor()->GetActorRotation();
						actorRot.Pitch += 45.f;
						hit->GetActor()->SetActorRotation(actorRot);
					}

					

				}
			}
		}
	}
}
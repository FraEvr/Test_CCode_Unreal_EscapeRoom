// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GrabSystemComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CCODE_API UGrabSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UGrabSystemComponent();

	//Fonction de grab
	void Grab();

	//Variable de r�f�rence � mon joueur
	AActor* playerActor;

protected:
	virtual void BeginPlay() override;

	//Variable de stockage de mon acteur r�cup�r� par le grab
	AActor* pickedUpActor;
	//Variable de stockage du StaticMeshComponent de mon acteur r�cup�r� par le grab
	UStaticMeshComponent* pickedUpActorMesh;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

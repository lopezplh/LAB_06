// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameMode.generated.h"

class AZombie;
class APlant;
UCLASS(MinimalAPI)
class APVZ_USFX_LAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB02GameMode();

	// Declarar un vector de objetos
	TArray<AZombie*> vectorZombies;
	TArray<APlant*> vectorPlants;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float TiempoTranscurrido;


};




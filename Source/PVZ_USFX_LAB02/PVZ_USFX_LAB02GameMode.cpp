// Copyright Epic Games, Inc. All Rights Reserved.
#include "PVZ_USFX_LAB02GameMode.h"
#include "PVZ_USFX_LAB02Pawn.h"
#include "Zombie.h"
#include "Sol.h"
#include "Plant.h"

APVZ_USFX_LAB02GameMode::APVZ_USFX_LAB02GameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB02Pawn::StaticClass();

	TiempoTranscurrido = 0.0f;
}
void APVZ_USFX_LAB02GameMode::BeginPlay()
{
	Super::BeginPlay();



	ASol* Sol1 = GetWorld()->SpawnActor <ASol>(ASol::StaticClass(), FVector(-400, -50, 160), FRotator::ZeroRotator);
	ASol* Sol2 = GetWorld()->SpawnActor <ASol>(ASol::StaticClass(), FVector(-450, -50, 160), FRotator::ZeroRotator);


	FVector SpawnLocationZombie = FVector(-800.0f, 400.0f, 160.0f);

	// Crear objetos y agregarlos al vector
	// Se crean los Zombies dinamicamente
	for (int i = 0; i < 5; i++) {
		SpawnLocationZombie.X += 100;
		AZombie* NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		NuevoZombie->MovementSpeed = 0.02f;
		vectorZombies.Add(NuevoZombie);
	}

	//Se crean las plantas dinamicamente
	FVector SpawnLocationPlant = FVector(-800.0f, -600.0f, 160.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;


	for (int i = 0; i < 5; i++) {
		SpawnLocationPlantTemp.X += 100;
		for (int j = 0; j < 2; j++) {
			SpawnLocationPlantTemp.Y += 80;
			APlant* NuevoPlant = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);
			vectorPlants.Add(NuevoPlant);
			//	SpawnLocationPlant = SpawnLocationPlantTemp;
		}
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	}

}

void APVZ_USFX_LAB02GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	if (TiempoTranscurrido > 2.0f) {
		// Iterar sobre el vector de objetos
		for (int i = 0; i < vectorZombies.Num(); i++) {
			vectorZombies[i]->MovementSpeed = FMath::FRand() * 0.1f;
			//vectorZombies[i]->MovementSpeed += i * 1.0f;
		}
		TiempoTranscurrido = 0.0f;
	}
}



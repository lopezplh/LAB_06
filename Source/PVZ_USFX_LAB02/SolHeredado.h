// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovimientoAleatorio.h"
#include "SolHeredado.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API USolHeredado : public UMovimientoAleatorio
{
	GENERATED_BODY()
	
public:
	

public:
	// Sets default values for this actor's properties
	USolHeredado();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};

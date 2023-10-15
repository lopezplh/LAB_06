// Fill out your copyright notice in the Description page of Project Settings.


#include "Sol.h"
#include "MovimientoAleatorio.h"
// Sets default values
ASol::ASol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshSol = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sol Mesh"));

	//Creando un "objeto" para movimineto
	ComponenteMovimiento = CreateDefaultSubobject<UMovimientoAleatorio>(TEXT("Movimiento")); //para que n se mueva solo comentar esto

	RootComponent = MeshSol;

	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SolMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	
	

	MeshSol->SetStaticMesh(SolMesh.Object);
	
}

// Called when the game starts or when spawned
void ASol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


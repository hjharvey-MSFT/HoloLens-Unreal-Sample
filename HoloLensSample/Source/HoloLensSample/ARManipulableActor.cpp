// Fill out your copyright notice in the Description page of Project Settings.


#include "ARManipulableActor.h"
#include "UXTools/Public/Interactions/UxtGenericManipulatorComponent.h"

// Sets default values
AARManipulableActor::AARManipulableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	UxtGenericManipulator = CreateDefaultSubobject<UUxtGenericManipulatorComponent>("UxtGenericManipulator");
	if (UxtGenericManipulator == nullptr) return;

	if (Mesh == nullptr) return;
	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void AARManipulableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AARManipulableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


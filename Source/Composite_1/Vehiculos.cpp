// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehiculos.h"

// Sets default values
AVehiculos::AVehiculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVehiculos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVehiculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVehiculos::EjecutarComando(const FString& Command)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Orden recibida, vehiculo: %s"), *Command));
}


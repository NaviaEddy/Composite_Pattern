// Fill out your copyright notice in the Description page of Project Settings.


#include "Soldado.h"

// Sets default values
ASoldado::ASoldado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASoldado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASoldado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASoldado::EjecutarComando(const FString& Command)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Orden recibida, soldado: %s"), *Command));
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Escuadrones.h"

// Sets default values
AEscuadrones::AEscuadrones()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Soldados = TArray<AActor*>();
}

// Called when the game starts or when spawned
void AEscuadrones::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscuadrones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscuadrones::EjecutarComando(const FString& Command)
{
	for (AActor* Soldado : Soldados)
	{
		Unidad = Cast<IIComposite>(Soldado);
		if (Unidad)
		{
			Unidad->EjecutarComando(Command);
		}
	}
}

void AEscuadrones::AgregarUnidades(AActor* Soldado)
{
	Soldados.Add(Soldado);
}

void AEscuadrones::EliminarUnidades(AActor* Soldado)
{
	Soldados.Remove(Soldado);
}


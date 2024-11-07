// Copyright Epic Games, Inc. All Rights Reserved.
#include "Composite_1GameModeBase.h"
#include "Soldado.h"
#include "Vehiculos.h"
#include "Escuadrones.h"

AComposite_1GameModeBase::AComposite_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AComposite_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Creamos diferentes soldados y les damos una orden
	Soldado1 = GetWorld()->SpawnActor<ASoldado>(ASoldado::StaticClass());
	Soldado1->EjecutarComando("Muevete al punto B");
	Soldado2 = GetWorld()->SpawnActor<ASoldado>(ASoldado::StaticClass());
	Soldado2->EjecutarComando("Muevete al punto B");

	//Creamos diferentes vehiculos y les damos una orden
	Vehiculo1 = GetWorld()->SpawnActor<AVehiculos>(AVehiculos::StaticClass());
	Vehiculo1->EjecutarComando("Carga gasolina");
	Vehiculo2 = GetWorld()->SpawnActor<AVehiculos>(AVehiculos::StaticClass());
	Vehiculo2->EjecutarComando("Recoje a los soldados");

	//Creamos escuadron 1 y le damos una orden
	Escuadrones1 = GetWorld()->SpawnActor<AEscuadrones>(AEscuadrones::StaticClass());
	Escuadrones1->AgregarUnidades(Soldado1);
	Escuadrones1->AgregarUnidades(Vehiculo1);
	Escuadrones1->EjecutarComando("Protejan la nuca");

	//Creamos escuadron 2 y le damos una orden
	Escuadrones2 = GetWorld()->SpawnActor<AEscuadrones>(AEscuadrones::StaticClass());
	Escuadrones2->AgregarUnidades(Vehiculo2);
	Escuadrones2->EjecutarComando("Derrape por el campo");

	//Creamos un escuadron de soldados y les damos una orden
	EscuadronSoldados = GetWorld()->SpawnActor<AEscuadrones>(AEscuadrones::StaticClass());
	EscuadronSoldados->AgregarUnidades(Soldado1);
	EscuadronSoldados->AgregarUnidades(Soldado2);
	EscuadronSoldados->EjecutarComando("Preparen armas");

	//Creamos un escuadron principal y le damos una orden
	EscuadronPrincipal = GetWorld()->SpawnActor<AEscuadrones>(AEscuadrones::StaticClass());
	EscuadronPrincipal->AgregarUnidades(EscuadronSoldados);
	EscuadronPrincipal->EjecutarComando("Ataquen al enemigo");
}

void AComposite_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Composite_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COMPOSITE_1_API AComposite_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AComposite_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class ASoldado* Soldado1;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ASoldado* Soldado2;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AVehiculos* Vehiculo1;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AVehiculos* Vehiculo2;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AEscuadrones* Escuadrones1;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AEscuadrones* Escuadrones2;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AEscuadrones* EscuadronPrincipal;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AEscuadrones* EscuadronSoldados;

};

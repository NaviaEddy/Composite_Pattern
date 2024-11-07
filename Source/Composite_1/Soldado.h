// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IComposite.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Soldado.generated.h"

UCLASS()
class COMPOSITE_1_API ASoldado : public AActor, public IIComposite
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASoldado();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void EjecutarComando(const FString& Command) override;
};
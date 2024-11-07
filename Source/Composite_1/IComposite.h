// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IComposite.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIComposite : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class COMPOSITE_1_API IIComposite
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Ejecutar comando para el arbol
	virtual void EjecutarComando(const FString& Command) = 0;
};

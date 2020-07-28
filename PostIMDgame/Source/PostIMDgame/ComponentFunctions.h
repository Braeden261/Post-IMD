// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ComponentFunctions.generated.h"

/**
 * 
 */
UCLASS()
class POSTIMDGAME_API UComponentFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category="Component Functions")
		static USceneComponent* AddComponentToObject(UClass * componentClass, AActor * parent);
};

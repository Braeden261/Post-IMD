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
public:
	UFUNCTION(BlueprintCallable, Category = "Component Functions")
		static USceneComponent* AddComponentToObject(UClass * componentClass, AActor * parent);
	UFUNCTION(BlueprintCallable, Category = "Component Functions", meta = (Keywords = "Load Text File"))
		static bool memeload(FString FileName, FString& FinalText);
	UFUNCTION(BlueprintCallable, Category = "Component Functions", meta = (Keywords = "Save Text File"))
		static bool memesave(FString FileText, FString Filename);
	UFUNCTION(BlueprintCallable, Category = "Component Functions", meta = (Keywords = "Find Dialogue CSV"))
		static void test(const FString fileName, FString& outName);
};

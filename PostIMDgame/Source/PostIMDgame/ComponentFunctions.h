// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ComponentFunctions.generated.h"

/**
 *
 */

USTRUCT(BlueprintType)
struct FNewDialogueStructure {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float ROW_ID = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float SELECTION_ID = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float PROGRESSION_ID = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float LINE_ID = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		FText Text = FText::FromString("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float GOTO_PROGRESSION = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float GOTO_SELECTION = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float GOTO_LINE = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		bool Exit = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float Time = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		FString Audio = "";
};

UCLASS()
class POSTIMDGAME_API UComponentFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Component Functions")
		static USceneComponent* AddComponentToObject(UClass * componentClass, AActor * parent);

	UFUNCTION(BlueprintCallable, Category = "Custom Filepath Functions", meta = (Keywords = "Find File"))
		static void findFilePathFromName(const FString startingPath, const FString fileName, FString& outName);
	UFUNCTION(BlueprintCallable, Category = "Custom Filepath Functions", meta = (Keywords = "Open Filepath And Output Dialogue Struct"))
		static void OpenFilepathAndOutputDialogueStruct(const FString filepath, FNewDialogueStructure& output, const int row);
	//UFUNCTION(BlueprintCallable, Category = "Custom Filepath Functions", meta = (Keywords = "Process CSV To Dialogue Struct"))
	

	//private
	static FNewDialogueStructure processCSVToDialogueStruct(const FString fstream, const int row);
	static void addToStruct(const FString name, const FString value, FNewDialogueStructure& output);

};
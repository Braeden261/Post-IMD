// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GenericTeamAgentInterface.h"
#include "BaseEnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class POSTIMDGAME_API ABaseEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
	//ABaseEnemyAIController::ABaseEnemyAIController(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
	//{
	//	// Assign to Team 1
	//	SetGenericTeamId(FGenericTeamId(1));
	//}

	ABaseEnemyAIController();

public:

	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

};

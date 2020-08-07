// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostIMDgame/BaseEnemyAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyAIController() {}
// Cross Module References
	POSTIMDGAME_API UClass* Z_Construct_UClass_ABaseEnemyAIController_NoRegister();
	POSTIMDGAME_API UClass* Z_Construct_UClass_ABaseEnemyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_PostIMDgame();
// End Cross Module References
	void ABaseEnemyAIController::StaticRegisterNativesABaseEnemyAIController()
	{
	}
	UClass* Z_Construct_UClass_ABaseEnemyAIController_NoRegister()
	{
		return ABaseEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PostIMDgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BaseEnemyAIController.h" },
		{ "ModuleRelativePath", "BaseEnemyAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyAIController_Statics::ClassParams = {
		&ABaseEnemyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemyAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseEnemyAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemyAIController, 3279513009);
	template<> POSTIMDGAME_API UClass* StaticClass<ABaseEnemyAIController>()
	{
		return ABaseEnemyAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemyAIController(Z_Construct_UClass_ABaseEnemyAIController, &ABaseEnemyAIController::StaticClass, TEXT("/Script/PostIMDgame"), TEXT("ABaseEnemyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

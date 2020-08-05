// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFollow/Classes/PFSpeedCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFSpeedCurve() {}
// Cross Module References
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFSpeedCurve();
	UPackage* Z_Construct_UPackage__Script_PathFollow();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FPFSpeedCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATHFOLLOW_API uint32 Get_Z_Construct_UScriptStruct_FPFSpeedCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPFSpeedCurve, Z_Construct_UPackage__Script_PathFollow(), TEXT("PFSpeedCurve"), sizeof(FPFSpeedCurve), Get_Z_Construct_UScriptStruct_FPFSpeedCurve_Hash());
	}
	return Singleton;
}
template<> PATHFOLLOW_API UScriptStruct* StaticStruct<FPFSpeedCurve>()
{
	return FPFSpeedCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPFSpeedCurve(FPFSpeedCurve::StaticStruct, TEXT("/Script/PathFollow"), TEXT("PFSpeedCurve"), false, nullptr, nullptr);
static struct FScriptStruct_PathFollow_StaticRegisterNativesFPFSpeedCurve
{
	FScriptStruct_PathFollow_StaticRegisterNativesFPFSpeedCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PFSpeedCurve")),new UScriptStruct::TCppStructOps<FPFSpeedCurve>);
	}
} ScriptStruct_PathFollow_StaticRegisterNativesFPFSpeedCurve;
	struct Z_Construct_UScriptStruct_FPFSpeedCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__speedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPFSpeedCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::NewProp__speedCurve_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::NewProp__speedCurve = { "_speedCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFSpeedCurve, _speedCurve), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::NewProp__speedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::NewProp__speedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::NewProp__speedCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PathFollow,
		nullptr,
		&NewStructOps,
		"PFSpeedCurve",
		sizeof(FPFSpeedCurve),
		alignof(FPFSpeedCurve),
		Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPFSpeedCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPFSpeedCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PathFollow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PFSpeedCurve"), sizeof(FPFSpeedCurve), Get_Z_Construct_UScriptStruct_FPFSpeedCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPFSpeedCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPFSpeedCurve_Hash() { return 2568997057U; }
class UScriptStruct* FPFSpeedPointsDrawConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATHFOLLOW_API uint32 Get_Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig, Z_Construct_UPackage__Script_PathFollow(), TEXT("PFSpeedPointsDrawConfig"), sizeof(FPFSpeedPointsDrawConfig), Get_Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Hash());
	}
	return Singleton;
}
template<> PATHFOLLOW_API UScriptStruct* StaticStruct<FPFSpeedPointsDrawConfig>()
{
	return FPFSpeedPointsDrawConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPFSpeedPointsDrawConfig(FPFSpeedPointsDrawConfig::StaticStruct, TEXT("/Script/PathFollow"), TEXT("PFSpeedPointsDrawConfig"), false, nullptr, nullptr);
static struct FScriptStruct_PathFollow_StaticRegisterNativesFPFSpeedPointsDrawConfig
{
	FScriptStruct_PathFollow_StaticRegisterNativesFPFSpeedPointsDrawConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PFSpeedPointsDrawConfig")),new UScriptStruct::TCppStructOps<FPFSpeedPointsDrawConfig>);
	}
} ScriptStruct_PathFollow_StaticRegisterNativesFPFSpeedPointsDrawConfig;
	struct Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighSpeedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighSpeedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowSpeedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowSpeedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeSpeed_MetaData[];
#endif
		static void NewProp_bVisualizeSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SpeedPointSpriteTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__SpeedPointSpriteTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedPointHitProxySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedPointHitProxySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedPointsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedPointsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideSpeedPointInfoText_MetaData[];
#endif
		static void NewProp_bHideSpeedPointInfoText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideSpeedPointInfoText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideSpeedPoints_MetaData[];
#endif
		static void NewProp_bHideSpeedPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideSpeedPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPFSpeedPointsDrawConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_HighSpeedColor_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_HighSpeedColor = { "HighSpeedColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFSpeedPointsDrawConfig, HighSpeedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_HighSpeedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_HighSpeedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_LowSpeedColor_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_LowSpeedColor = { "LowSpeedColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFSpeedPointsDrawConfig, LowSpeedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_LowSpeedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_LowSpeedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bVisualizeSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bVisualizeSpeed_SetBit(void* Obj)
	{
		((FPFSpeedPointsDrawConfig*)Obj)->bVisualizeSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bVisualizeSpeed = { "bVisualizeSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPFSpeedPointsDrawConfig), &Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bVisualizeSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bVisualizeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bVisualizeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp__SpeedPointSpriteTexture_MetaData[] = {
		{ "Category", "Speed" },
		{ "DisplayName", "Sprite" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp__SpeedPointSpriteTexture = { "_SpeedPointSpriteTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFSpeedPointsDrawConfig, _SpeedPointSpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp__SpeedPointSpriteTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp__SpeedPointSpriteTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointHitProxySize_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointHitProxySize = { "SpeedPointHitProxySize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFSpeedPointsDrawConfig, SpeedPointHitProxySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointHitProxySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointHitProxySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointsColor_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "//#if WITH_EDITOR\n" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
		{ "ToolTip", "#if WITH_EDITOR" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointsColor = { "SpeedPointsColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFSpeedPointsDrawConfig, SpeedPointsColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPointInfoText_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPointInfoText_SetBit(void* Obj)
	{
		((FPFSpeedPointsDrawConfig*)Obj)->bHideSpeedPointInfoText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPointInfoText = { "bHideSpeedPointInfoText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPFSpeedPointsDrawConfig), &Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPointInfoText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPointInfoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPointInfoText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPoints_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Classes/PFSpeedCurve.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPoints_SetBit(void* Obj)
	{
		((FPFSpeedPointsDrawConfig*)Obj)->bHideSpeedPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPoints = { "bHideSpeedPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPFSpeedPointsDrawConfig), &Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPoints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_HighSpeedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_LowSpeedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bVisualizeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp__SpeedPointSpriteTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointHitProxySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_SpeedPointsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPointInfoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::NewProp_bHideSpeedPoints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PathFollow,
		nullptr,
		&NewStructOps,
		"PFSpeedPointsDrawConfig",
		sizeof(FPFSpeedPointsDrawConfig),
		alignof(FPFSpeedPointsDrawConfig),
		Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PathFollow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PFSpeedPointsDrawConfig"), sizeof(FPFSpeedPointsDrawConfig), Get_Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig_Hash() { return 2274670085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

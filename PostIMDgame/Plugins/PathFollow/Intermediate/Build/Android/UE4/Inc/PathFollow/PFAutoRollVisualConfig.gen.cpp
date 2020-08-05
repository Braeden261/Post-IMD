// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFollow/Classes/PFAutoRollVisualConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFAutoRollVisualConfig() {}
// Cross Module References
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFAutoRollVisualConfig();
	UPackage* Z_Construct_UPackage__Script_PathFollow();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FPFAutoRollVisualConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATHFOLLOW_API uint32 Get_Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig, Z_Construct_UPackage__Script_PathFollow(), TEXT("PFAutoRollVisualConfig"), sizeof(FPFAutoRollVisualConfig), Get_Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Hash());
	}
	return Singleton;
}
template<> PATHFOLLOW_API UScriptStruct* StaticStruct<FPFAutoRollVisualConfig>()
{
	return FPFAutoRollVisualConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPFAutoRollVisualConfig(FPFAutoRollVisualConfig::StaticStruct, TEXT("/Script/PathFollow"), TEXT("PFAutoRollVisualConfig"), false, nullptr, nullptr);
static struct FScriptStruct_PathFollow_StaticRegisterNativesFPFAutoRollVisualConfig
{
	FScriptStruct_PathFollow_StaticRegisterNativesFPFAutoRollVisualConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PFAutoRollVisualConfig")),new UScriptStruct::TCppStructOps<FPFAutoRollVisualConfig>);
	}
} ScriptStruct_PathFollow_StaticRegisterNativesFPFAutoRollVisualConfig;
	struct Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPointColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedPointColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideTextInfo_MetaData[];
#endif
		static void NewProp_bHideTextInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideTextInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePointsVisualization_MetaData[];
#endif
		static void NewProp_bHidePointsVisualization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePointsVisualization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Debug draw config for auto roll feature.\n*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Debug draw config for auto roll feature." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPFAutoRollVisualConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "Comment", "/*\n\x09* Debug lines thickness\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Debug lines thickness" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFAutoRollVisualConfig, LineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointSize_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "Comment", "/*\n\x09* Debug point size\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Debug point size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFAutoRollVisualConfig, PointSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_SelectedPointColor_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "Comment", "/*\n\x09* Color of selected rotation point\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Color of selected rotation point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_SelectedPointColor = { "SelectedPointColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFAutoRollVisualConfig, SelectedPointColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_SelectedPointColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_SelectedPointColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointColor_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "Comment", "/*\n\x09* Color of non-selected rotation point\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Color of non-selected rotation point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointColor = { "PointColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFAutoRollVisualConfig, PointColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineLength_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "Comment", "/*\n\x09* Length of rotation point debug lines\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Length of rotation point debug lines" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFAutoRollVisualConfig, LineLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHideTextInfo_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "Comment", "/*\n\x09* Hide distance text and rotation angles (in degrees)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Hide distance text and rotation angles (in degrees)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHideTextInfo_SetBit(void* Obj)
	{
		((FPFAutoRollVisualConfig*)Obj)->bHideTextInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHideTextInfo = { "bHideTextInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPFAutoRollVisualConfig), &Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHideTextInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHideTextInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHideTextInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHidePointsVisualization_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "Comment", "/*\n\x09* Draw a line for each rotation point\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PFAutoRollVisualConfig.h" },
		{ "ToolTip", "* Draw a line for each rotation point" },
	};
#endif
	void Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHidePointsVisualization_SetBit(void* Obj)
	{
		((FPFAutoRollVisualConfig*)Obj)->bHidePointsVisualization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHidePointsVisualization = { "bHidePointsVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPFAutoRollVisualConfig), &Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHidePointsVisualization_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHidePointsVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHidePointsVisualization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_SelectedPointColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_PointColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_LineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHideTextInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::NewProp_bHidePointsVisualization,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PathFollow,
		nullptr,
		&NewStructOps,
		"PFAutoRollVisualConfig",
		sizeof(FPFAutoRollVisualConfig),
		alignof(FPFAutoRollVisualConfig),
		Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPFAutoRollVisualConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PathFollow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PFAutoRollVisualConfig"), sizeof(FPFAutoRollVisualConfig), Get_Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPFAutoRollVisualConfig_Hash() { return 4122226210U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

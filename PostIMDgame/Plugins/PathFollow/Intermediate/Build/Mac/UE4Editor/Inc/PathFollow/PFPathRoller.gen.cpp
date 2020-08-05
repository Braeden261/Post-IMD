// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFollow/Classes/PFPathRoller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFPathRoller() {}
// Cross Module References
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFPathRoller();
	UPackage* Z_Construct_UPackage__Script_PathFollow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
class UScriptStruct* FPFPathRoller::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATHFOLLOW_API uint32 Get_Z_Construct_UScriptStruct_FPFPathRoller_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPFPathRoller, Z_Construct_UPackage__Script_PathFollow(), TEXT("PFPathRoller"), sizeof(FPFPathRoller), Get_Z_Construct_UScriptStruct_FPFPathRoller_Hash());
	}
	return Singleton;
}
template<> PATHFOLLOW_API UScriptStruct* StaticStruct<FPFPathRoller>()
{
	return FPFPathRoller::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPFPathRoller(FPFPathRoller::StaticStruct, TEXT("/Script/PathFollow"), TEXT("PFPathRoller"), false, nullptr, nullptr);
static struct FScriptStruct_PathFollow_StaticRegisterNativesFPFPathRoller
{
	FScriptStruct_PathFollow_StaticRegisterNativesFPFPathRoller()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PFPathRoller")),new UScriptStruct::TCppStructOps<FPFPathRoller>);
	}
} ScriptStruct_PathFollow_StaticRegisterNativesFPFPathRoller;
	struct Z_Construct_UScriptStruct_FPFPathRoller_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__curves;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__curves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rollAnglesCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rollAnglesCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFPathRoller_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PFPathRoller.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPFPathRoller>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__curves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PFPathRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__curves = { "_curves", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFPathRoller, _curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__curves_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__curves_Inner = { "_curves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__rollAnglesCurve_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/PFPathRoller.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__rollAnglesCurve = { "_rollAnglesCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPFPathRoller, _rollAnglesCurve), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__rollAnglesCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__rollAnglesCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPFPathRoller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__curves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__curves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPFPathRoller_Statics::NewProp__rollAnglesCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPFPathRoller_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PathFollow,
		nullptr,
		&NewStructOps,
		"PFPathRoller",
		sizeof(FPFPathRoller),
		alignof(FPFPathRoller),
		Z_Construct_UScriptStruct_FPFPathRoller_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFPathRoller_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPFPathRoller_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPFPathRoller_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPFPathRoller()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPFPathRoller_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PathFollow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PFPathRoller"), sizeof(FPFPathRoller), Get_Z_Construct_UScriptStruct_FPFPathRoller_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPFPathRoller_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPFPathRoller_Hash() { return 1448936664U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

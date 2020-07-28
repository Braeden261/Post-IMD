// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSD2UMG/Public/PSD2UMGCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSD2UMGCache() {}
// Cross Module References
	PSD2UMG_API UClass* Z_Construct_UClass_UPSD2UMGCache_NoRegister();
	PSD2UMG_API UClass* Z_Construct_UClass_UPSD2UMGCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PSD2UMG();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void UPSD2UMGCache::StaticRegisterNativesUPSD2UMGCache()
	{
	}
	UClass* Z_Construct_UClass_UPSD2UMGCache_NoRegister()
	{
		return UPSD2UMGCache::StaticClass();
	}
	struct Z_Construct_UClass_UPSD2UMGCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPSD2UMGCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PSD2UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPSD2UMGCache_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PSD2UMGCache.h" },
		{ "ModuleRelativePath", "Public/PSD2UMGCache.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/PSD2UMGCache.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSD2UMGCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPSD2UMGCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPSD2UMGCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPSD2UMGCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPSD2UMGCache_Statics::ClassParams = {
		&UPSD2UMGCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPSD2UMGCache_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPSD2UMGCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPSD2UMGCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPSD2UMGCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPSD2UMGCache, 1682071878);
	template<> PSD2UMG_API UClass* StaticClass<UPSD2UMGCache>()
	{
		return UPSD2UMGCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPSD2UMGCache(Z_Construct_UClass_UPSD2UMGCache, &UPSD2UMGCache::StaticClass, TEXT("/Script/PSD2UMG"), TEXT("UPSD2UMGCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPSD2UMGCache);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

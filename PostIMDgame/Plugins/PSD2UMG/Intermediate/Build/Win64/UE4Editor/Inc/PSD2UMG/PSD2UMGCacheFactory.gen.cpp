// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSD2UMG/Public/PSD2UMGCacheFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSD2UMGCacheFactory() {}
// Cross Module References
	PSD2UMG_API UClass* Z_Construct_UClass_UPSD2UMGCacheFactory_NoRegister();
	PSD2UMG_API UClass* Z_Construct_UClass_UPSD2UMGCacheFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PSD2UMG();
// End Cross Module References
	void UPSD2UMGCacheFactory::StaticRegisterNativesUPSD2UMGCacheFactory()
	{
	}
	UClass* Z_Construct_UClass_UPSD2UMGCacheFactory_NoRegister()
	{
		return UPSD2UMGCacheFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPSD2UMGCacheFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPSD2UMGCacheFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PSD2UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPSD2UMGCacheFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PSD2UMGCacheFactory.h" },
		{ "ModuleRelativePath", "Public/PSD2UMGCacheFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPSD2UMGCacheFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPSD2UMGCacheFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPSD2UMGCacheFactory_Statics::ClassParams = {
		&UPSD2UMGCacheFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPSD2UMGCacheFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCacheFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPSD2UMGCacheFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPSD2UMGCacheFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPSD2UMGCacheFactory, 2062454612);
	template<> PSD2UMG_API UClass* StaticClass<UPSD2UMGCacheFactory>()
	{
		return UPSD2UMGCacheFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPSD2UMGCacheFactory(Z_Construct_UClass_UPSD2UMGCacheFactory, &UPSD2UMGCacheFactory::StaticClass, TEXT("/Script/PSD2UMG"), TEXT("UPSD2UMGCacheFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPSD2UMGCacheFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

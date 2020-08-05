// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFollow/Classes/PFPathBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFPathBase() {}
// Cross Module References
	PATHFOLLOW_API UClass* Z_Construct_UClass_APFPathBase_NoRegister();
	PATHFOLLOW_API UClass* Z_Construct_UClass_APFPathBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PathFollow();
	PATHFOLLOW_API UClass* Z_Construct_UClass_UPFPathComponent_NoRegister();
// End Cross Module References
	void APFPathBase::StaticRegisterNativesAPFPathBase()
	{
	}
	UClass* Z_Construct_UClass_APFPathBase_NoRegister()
	{
		return APFPathBase::StaticClass();
	}
	struct Z_Construct_UClass_APFPathBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToFollow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathToFollow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APFPathBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFollow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APFPathBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PFPathBase.h" },
		{ "ModuleRelativePath", "Classes/PFPathBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APFPathBase_Statics::NewProp_PathToFollow_MetaData[] = {
		{ "Category", "PathFollow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PFPathBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFPathBase_Statics::NewProp_PathToFollow = { "PathToFollow", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APFPathBase, PathToFollow), Z_Construct_UClass_UPFPathComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APFPathBase_Statics::NewProp_PathToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APFPathBase_Statics::NewProp_PathToFollow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APFPathBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFPathBase_Statics::NewProp_PathToFollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APFPathBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APFPathBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APFPathBase_Statics::ClassParams = {
		&APFPathBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APFPathBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APFPathBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APFPathBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APFPathBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APFPathBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APFPathBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APFPathBase, 3720017752);
	template<> PATHFOLLOW_API UClass* StaticClass<APFPathBase>()
	{
		return APFPathBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APFPathBase(Z_Construct_UClass_APFPathBase, &APFPathBase::StaticClass, TEXT("/Script/PathFollow"), TEXT("APFPathBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APFPathBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

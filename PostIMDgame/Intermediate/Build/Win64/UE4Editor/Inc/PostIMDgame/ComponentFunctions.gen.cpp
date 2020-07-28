// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostIMDgame/ComponentFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentFunctions() {}
// Cross Module References
	POSTIMDGAME_API UClass* Z_Construct_UClass_UComponentFunctions_NoRegister();
	POSTIMDGAME_API UClass* Z_Construct_UClass_UComponentFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PostIMDgame();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponentFunctions::execAddComponentToObject)
	{
		P_GET_OBJECT(UClass,Z_Param_componentClass);
		P_GET_OBJECT(AActor,Z_Param_parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=UComponentFunctions::AddComponentToObject(Z_Param_componentClass,Z_Param_parent);
		P_NATIVE_END;
	}
	void UComponentFunctions::StaticRegisterNativesUComponentFunctions()
	{
		UClass* Class = UComponentFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddComponentToObject", &UComponentFunctions::execAddComponentToObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics
	{
		struct ComponentFunctions_eventAddComponentToObject_Parms
		{
			UClass* componentClass;
			AActor* parent;
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_componentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentFunctions_eventAddComponentToObject_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentFunctions_eventAddComponentToObject_Parms, parent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_componentClass = { "componentClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentFunctions_eventAddComponentToObject_Parms, componentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::NewProp_componentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component Functions" },
		{ "ModuleRelativePath", "ComponentFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentFunctions, nullptr, "AddComponentToObject", nullptr, nullptr, sizeof(ComponentFunctions_eventAddComponentToObject_Parms), Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentFunctions_AddComponentToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentFunctions_AddComponentToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponentFunctions_NoRegister()
	{
		return UComponentFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UComponentFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PostIMDgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponentFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponentFunctions_AddComponentToObject, "AddComponentToObject" }, // 2305560028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ComponentFunctions.h" },
		{ "ModuleRelativePath", "ComponentFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponentFunctions_Statics::ClassParams = {
		&UComponentFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponentFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponentFunctions, 2320563254);
	template<> POSTIMDGAME_API UClass* StaticClass<UComponentFunctions>()
	{
		return UComponentFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponentFunctions(Z_Construct_UClass_UComponentFunctions, &UComponentFunctions::StaticClass, TEXT("/Script/PostIMDgame"), TEXT("UComponentFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

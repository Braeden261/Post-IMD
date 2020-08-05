// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFollow/Components/PFPathComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFPathComponent() {}
// Cross Module References
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FDrawerData();
	UPackage* Z_Construct_UPackage__Script_PathFollow();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PATHFOLLOW_API UClass* Z_Construct_UClass_UPFPathComponent_NoRegister();
	PATHFOLLOW_API UClass* Z_Construct_UClass_UPFPathComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace();
	PATHFOLLOW_API UClass* Z_Construct_UClass_UPFPathFollowerComponent_NoRegister();
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig();
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFAutoRollVisualConfig();
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFSpeedCurve();
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFPathRoller();
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFEventPoints();
	PATHFOLLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPFEventPointsVisualization();
// End Cross Module References
class UScriptStruct* FDrawerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATHFOLLOW_API uint32 Get_Z_Construct_UScriptStruct_FDrawerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDrawerData, Z_Construct_UPackage__Script_PathFollow(), TEXT("DrawerData"), sizeof(FDrawerData), Get_Z_Construct_UScriptStruct_FDrawerData_Hash());
	}
	return Singleton;
}
template<> PATHFOLLOW_API UScriptStruct* StaticStruct<FDrawerData>()
{
	return FDrawerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDrawerData(FDrawerData::StaticStruct, TEXT("/Script/PathFollow"), TEXT("DrawerData"), false, nullptr, nullptr);
static struct FScriptStruct_PathFollow_StaticRegisterNativesFDrawerData
{
	FScriptStruct_PathFollow_StaticRegisterNativesFDrawerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DrawerData")),new UScriptStruct::TCppStructOps<FDrawerData>);
	}
} ScriptStruct_PathFollow_StaticRegisterNativesFDrawerData;
	struct Z_Construct_UScriptStruct_FDrawerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawIfSelected_MetaData[];
#endif
		static void NewProp_bDrawIfSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawIfSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawIfNotSelected_MetaData[];
#endif
		static void NewProp_bDrawIfNotSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawIfNotSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawerData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//#if WITH_EDITORONLY_DATA\n" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
		{ "ToolTip", "#if WITH_EDITORONLY_DATA" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDrawerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDrawerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Vizualization" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDrawerData, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_PathColor_MetaData[] = {
		{ "Category", "Vizualization" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_PathColor = { "PathColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDrawerData, PathColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_PathColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_PathColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfSelected_MetaData[] = {
		{ "Category", "Vizualization" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfSelected_SetBit(void* Obj)
	{
		((FDrawerData*)Obj)->bDrawIfSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfSelected = { "bDrawIfSelected", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDrawerData), &Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfNotSelected_MetaData[] = {
		{ "Category", "Vizualization" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfNotSelected_SetBit(void* Obj)
	{
		((FDrawerData*)Obj)->bDrawIfNotSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfNotSelected = { "bDrawIfNotSelected", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDrawerData), &Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfNotSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfNotSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfNotSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDrawerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_PathColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawerData_Statics::NewProp_bDrawIfNotSelected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDrawerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PathFollow,
		nullptr,
		&NewStructOps,
		"DrawerData",
		sizeof(FDrawerData),
		alignof(FDrawerData),
		Z_Construct_UScriptStruct_FDrawerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDrawerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDrawerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PathFollow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DrawerData"), sizeof(FDrawerData), Get_Z_Construct_UScriptStruct_FDrawerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDrawerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDrawerData_Hash() { return 120843637U; }
	DEFINE_FUNCTION(UPFPathComponent::execGetLocationAtSplineInputKeyMirrored)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtSplineInputKeyMirrored(Z_Param_Key,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPFPathComponent::execGetLocationAtSplinePointMirrored)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIdx);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtSplinePointMirrored(Z_Param_PointIdx,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPFPathComponent::execGetLocationAtDistanceAlongSplineMirrored)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtDistanceAlongSplineMirrored(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	void UPFPathComponent::StaticRegisterNativesUPFPathComponent()
	{
		UClass* Class = UPFPathComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocationAtDistanceAlongSplineMirrored", &UPFPathComponent::execGetLocationAtDistanceAlongSplineMirrored },
			{ "GetLocationAtSplineInputKeyMirrored", &UPFPathComponent::execGetLocationAtSplineInputKeyMirrored },
			{ "GetLocationAtSplinePointMirrored", &UPFPathComponent::execGetLocationAtSplinePointMirrored },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics
	{
		struct PFPathComponent_eventGetLocationAtDistanceAlongSplineMirrored_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtDistanceAlongSplineMirrored_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtDistanceAlongSplineMirrored_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtDistanceAlongSplineMirrored_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the point in space where this puts you */" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the point in space where this puts you" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFPathComponent, nullptr, "GetLocationAtDistanceAlongSplineMirrored", nullptr, nullptr, sizeof(PFPathComponent_eventGetLocationAtDistanceAlongSplineMirrored_Parms), Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics
	{
		struct PFPathComponent_eventGetLocationAtSplineInputKeyMirrored_Parms
		{
			float Key;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtSplineInputKeyMirrored_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtSplineInputKeyMirrored_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtSplineInputKeyMirrored_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get location along spline at the provided input key value mirrored along xz plane is MirrorAroundX is true*/" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
		{ "ToolTip", "Get location along spline at the provided input key value mirrored along xz plane is MirrorAroundX is true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFPathComponent, nullptr, "GetLocationAtSplineInputKeyMirrored", nullptr, nullptr, sizeof(PFPathComponent_eventGetLocationAtSplineInputKeyMirrored_Parms), Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics
	{
		struct PFPathComponent_eventGetLocationAtSplinePointMirrored_Parms
		{
			int32 PointIdx;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtSplinePointMirrored_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtSplinePointMirrored_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::NewProp_PointIdx = { "PointIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PFPathComponent_eventGetLocationAtSplinePointMirrored_Parms, PointIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::NewProp_CoordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::NewProp_PointIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the point in space where this puts you */" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the point in space where this puts you" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFPathComponent, nullptr, "GetLocationAtSplinePointMirrored", nullptr, nullptr, sizeof(PFPathComponent_eventGetLocationAtSplinePointMirrored_Parms), Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPFPathComponent_NoRegister()
	{
		return UPFPathComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPFPathComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__FollowerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__FollowerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedPointDrawConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedPointDrawConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoRollDebugConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoRollDebugConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorAroundX_MetaData[];
#endif
		static void NewProp_MirrorAroundX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MirrorAroundX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PathRoller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__PathRoller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPointsVisualization_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventPointsVisualization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawerConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawerConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPFPathComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFollow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPFPathComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPFPathComponent_GetLocationAtDistanceAlongSplineMirrored, "GetLocationAtDistanceAlongSplineMirrored" }, // 4208768030
		{ &Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplineInputKeyMirrored, "GetLocationAtSplineInputKeyMirrored" }, // 2385398603
		{ &Z_Construct_UFunction_UPFPathComponent_GetLocationAtSplinePointMirrored, "GetLocationAtSplinePointMirrored" }, // 605501854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "PF" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "Components/PFPathComponent.h" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp__FollowerComponent_MetaData[] = {
		{ "Comment", "/*\n\x09* Valid if this component has a follower component which is following it. I.e. valid if it has been assigned as SplineToFollow to path follower\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "* Valid if this component has a follower component which is following it. I.e. valid if it has been assigned as SplineToFollow to path follower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp__FollowerComponent = { "_FollowerComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, _FollowerComponent), Z_Construct_UClass_UPFPathFollowerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp__FollowerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp__FollowerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp_SpeedPointDrawConfig_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "DisplayName", "Visualization" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp_SpeedPointDrawConfig = { "SpeedPointDrawConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, SpeedPointDrawConfig), Z_Construct_UScriptStruct_FPFSpeedPointsDrawConfig, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_SpeedPointDrawConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_SpeedPointDrawConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp_AutoRollDebugConfig_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "DisplayName", "Visualization" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp_AutoRollDebugConfig = { "AutoRollDebugConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, AutoRollDebugConfig), Z_Construct_UScriptStruct_FPFAutoRollVisualConfig, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_AutoRollDebugConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_AutoRollDebugConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp_MirrorAroundX_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPFPathComponent_Statics::NewProp_MirrorAroundX_SetBit(void* Obj)
	{
		((UPFPathComponent*)Obj)->MirrorAroundX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp_MirrorAroundX = { "MirrorAroundX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPFPathComponent), &Z_Construct_UClass_UPFPathComponent_Statics::NewProp_MirrorAroundX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_MirrorAroundX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_MirrorAroundX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp__SpeedCurve_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "/**\n\x09* Holds roll angle curve for AutoRoll feature.\n\x09*/" },
		{ "DisplayName", "Curve" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
		{ "ToolTip", "Holds roll angle curve for AutoRoll feature." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp__SpeedCurve = { "_SpeedCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, _SpeedCurve), Z_Construct_UScriptStruct_FPFSpeedCurve, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp__SpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp__SpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp__PathRoller_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09* Holds roll angle curve for AutoRoll feature.\n\x09*/" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
		{ "ToolTip", "Holds roll angle curve for AutoRoll feature." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp__PathRoller = { "_PathRoller", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, _PathRoller), Z_Construct_UScriptStruct_FPFPathRoller, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp__PathRoller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp__PathRoller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPoints_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "Points" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPoints = { "EventPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, EventPoints), Z_Construct_UScriptStruct_FPFEventPoints, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPointsVisualization_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "Visualization" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPointsVisualization = { "EventPointsVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, EventPointsVisualization), Z_Construct_UScriptStruct_FPFEventPointsVisualization, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPointsVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPointsVisualization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFPathComponent_Statics::NewProp_DrawerConfig_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Components/PFPathComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPFPathComponent_Statics::NewProp_DrawerConfig = { "DrawerConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPFPathComponent, DrawerConfig), Z_Construct_UScriptStruct_FDrawerData, METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_DrawerConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::NewProp_DrawerConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPFPathComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp__FollowerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp_SpeedPointDrawConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp_AutoRollDebugConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp_MirrorAroundX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp__SpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp__PathRoller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp_EventPointsVisualization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFPathComponent_Statics::NewProp_DrawerConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPFPathComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFPathComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPFPathComponent_Statics::ClassParams = {
		&UPFPathComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPFPathComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPFPathComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPFPathComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPFPathComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPFPathComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPFPathComponent, 3993921774);
	template<> PATHFOLLOW_API UClass* StaticClass<UPFPathComponent>()
	{
		return UPFPathComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPFPathComponent(Z_Construct_UClass_UPFPathComponent, &UPFPathComponent::StaticClass, TEXT("/Script/PathFollow"), TEXT("UPFPathComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPFPathComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

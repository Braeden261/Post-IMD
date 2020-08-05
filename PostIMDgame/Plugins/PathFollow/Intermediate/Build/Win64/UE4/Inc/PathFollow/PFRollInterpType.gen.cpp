// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFollow/Classes/PFRollInterpType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFRollInterpType() {}
// Cross Module References
	PATHFOLLOW_API UEnum* Z_Construct_UEnum_PathFollow_EPFRollInterpType();
	UPackage* Z_Construct_UPackage__Script_PathFollow();
// End Cross Module References
	static UEnum* EPFRollInterpType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PathFollow_EPFRollInterpType, Z_Construct_UPackage__Script_PathFollow(), TEXT("EPFRollInterpType"));
		}
		return Singleton;
	}
	template<> PATHFOLLOW_API UEnum* StaticEnum<EPFRollInterpType>()
	{
		return EPFRollInterpType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPFRollInterpType(EPFRollInterpType_StaticEnum, TEXT("/Script/PathFollow"), TEXT("EPFRollInterpType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PathFollow_EPFRollInterpType_Hash() { return 2426179046U; }
	UEnum* Z_Construct_UEnum_PathFollow_EPFRollInterpType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PathFollow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPFRollInterpType"), 0, Get_Z_Construct_UEnum_PathFollow_EPFRollInterpType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPFRollInterpType::Constant", (int64)EPFRollInterpType::Constant },
				{ "EPFRollInterpType::Linear", (int64)EPFRollInterpType::Linear },
				{ "EPFRollInterpType::LinearStable", (int64)EPFRollInterpType::LinearStable },
				{ "EPFRollInterpType::Cubic", (int64)EPFRollInterpType::Cubic },
				{ "EPFRollInterpType::CubicClamped", (int64)EPFRollInterpType::CubicClamped },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\"BlueprintType\" is essential to include\n" },
				{ "Constant.DisplayName", "Constant" },
				{ "Constant.Name", "EPFRollInterpType::Constant" },
				{ "Cubic.DisplayName", "Cubic" },
				{ "Cubic.Name", "EPFRollInterpType::Cubic" },
				{ "CubicClamped.DisplayName", "Cubic Clamped" },
				{ "CubicClamped.Name", "EPFRollInterpType::CubicClamped" },
				{ "Linear.DisplayName", "Linear" },
				{ "Linear.Name", "EPFRollInterpType::Linear" },
				{ "LinearStable.DisplayName", "Linear Stable" },
				{ "LinearStable.Name", "EPFRollInterpType::LinearStable" },
				{ "ModuleRelativePath", "Classes/PFRollInterpType.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PathFollow,
				nullptr,
				"EPFRollInterpType",
				"EPFRollInterpType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

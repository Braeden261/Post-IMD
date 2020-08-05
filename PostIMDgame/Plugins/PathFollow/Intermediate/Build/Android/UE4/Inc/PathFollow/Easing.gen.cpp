// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFollow/Classes/Easing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasing() {}
// Cross Module References
	PATHFOLLOW_API UEnum* Z_Construct_UEnum_PathFollow_EEasingType();
	UPackage* Z_Construct_UPackage__Script_PathFollow();
// End Cross Module References
	static UEnum* EEasingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PathFollow_EEasingType, Z_Construct_UPackage__Script_PathFollow(), TEXT("EEasingType"));
		}
		return Singleton;
	}
	template<> PATHFOLLOW_API UEnum* StaticEnum<EEasingType>()
	{
		return EEasingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEasingType(EEasingType_StaticEnum, TEXT("/Script/PathFollow"), TEXT("EEasingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PathFollow_EEasingType_Hash() { return 3944900609U; }
	UEnum* Z_Construct_UEnum_PathFollow_EEasingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PathFollow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEasingType"), 0, Get_Z_Construct_UEnum_PathFollow_EEasingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEasingType::Linear", (int64)EEasingType::Linear },
				{ "EEasingType::CircularIn", (int64)EEasingType::CircularIn },
				{ "EEasingType::CircularOut", (int64)EEasingType::CircularOut },
				{ "EEasingType::CircularInOut", (int64)EEasingType::CircularInOut },
				{ "EEasingType::EaseIn", (int64)EEasingType::EaseIn },
				{ "EEasingType::EaseOut", (int64)EEasingType::EaseOut },
				{ "EEasingType::EaseInOut", (int64)EEasingType::EaseInOut },
				{ "EEasingType::ExpoIn", (int64)EEasingType::ExpoIn },
				{ "EEasingType::ExpoOut", (int64)EEasingType::ExpoOut },
				{ "EEasingType::ExpoInOut", (int64)EEasingType::ExpoInOut },
				{ "EEasingType::SinIn", (int64)EEasingType::SinIn },
				{ "EEasingType::SinOut", (int64)EEasingType::SinOut },
				{ "EEasingType::SinInOut", (int64)EEasingType::SinInOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CircularIn.DisplayName", "Circular In" },
				{ "CircularIn.Name", "EEasingType::CircularIn" },
				{ "CircularInOut.DisplayName", "Circular InOut" },
				{ "CircularInOut.Name", "EEasingType::CircularInOut" },
				{ "CircularOut.DisplayName", "Circular Out" },
				{ "CircularOut.Name", "EEasingType::CircularOut" },
				{ "Comment", "/*\n* Easing types.\n*///\"BlueprintType\" is essential to include\n" },
				{ "EaseIn.DisplayName", "Ease In" },
				{ "EaseIn.Name", "EEasingType::EaseIn" },
				{ "EaseInOut.DisplayName", "Ease InOut" },
				{ "EaseInOut.Name", "EEasingType::EaseInOut" },
				{ "EaseOut.DisplayName", "Ease Out" },
				{ "EaseOut.Name", "EEasingType::EaseOut" },
				{ "ExpoIn.DisplayName", "Expo In" },
				{ "ExpoIn.Name", "EEasingType::ExpoIn" },
				{ "ExpoInOut.DisplayName", "Expo InOut" },
				{ "ExpoInOut.Name", "EEasingType::ExpoInOut" },
				{ "ExpoOut.DisplayName", "Expo Out" },
				{ "ExpoOut.Name", "EEasingType::ExpoOut" },
				{ "Linear.DisplayName", "Linear" },
				{ "Linear.Name", "EEasingType::Linear" },
				{ "ModuleRelativePath", "Classes/Easing.h" },
				{ "SinIn.DisplayName", "Sin In" },
				{ "SinIn.Name", "EEasingType::SinIn" },
				{ "SinInOut.DisplayName", "Sin InOut" },
				{ "SinInOut.Name", "EEasingType::SinInOut" },
				{ "SinOut.DisplayName", "Sin Out" },
				{ "SinOut.Name", "EEasingType::SinOut" },
				{ "ToolTip", "* Easing types.\n//\"BlueprintType\" is essential to include" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PathFollow,
				nullptr,
				"EEasingType",
				"EEasingType",
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

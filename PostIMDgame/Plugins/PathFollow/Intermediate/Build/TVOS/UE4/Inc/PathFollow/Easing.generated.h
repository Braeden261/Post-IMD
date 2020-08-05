// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFOLLOW_Easing_generated_h
#error "Easing.generated.h already included, missing '#pragma once' in Easing.h"
#endif
#define PATHFOLLOW_Easing_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_PathFollow_Source_PathFollow_Classes_Easing_h


#define FOREACH_ENUM_EEASINGTYPE(op) \
	op(EEasingType::Linear) \
	op(EEasingType::CircularIn) \
	op(EEasingType::CircularOut) \
	op(EEasingType::CircularInOut) \
	op(EEasingType::EaseIn) \
	op(EEasingType::EaseOut) \
	op(EEasingType::EaseInOut) \
	op(EEasingType::ExpoIn) \
	op(EEasingType::ExpoOut) \
	op(EEasingType::ExpoInOut) \
	op(EEasingType::SinIn) \
	op(EEasingType::SinOut) \
	op(EEasingType::SinInOut) 

enum class EEasingType : uint8;
template<> PATHFOLLOW_API UEnum* StaticEnum<EEasingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

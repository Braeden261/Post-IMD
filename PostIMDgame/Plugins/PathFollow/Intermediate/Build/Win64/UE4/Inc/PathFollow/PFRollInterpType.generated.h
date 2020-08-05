// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFOLLOW_PFRollInterpType_generated_h
#error "PFRollInterpType.generated.h already included, missing '#pragma once' in PFRollInterpType.h"
#endif
#define PATHFOLLOW_PFRollInterpType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFRollInterpType_h


#define FOREACH_ENUM_EPFROLLINTERPTYPE(op) \
	op(EPFRollInterpType::Constant) \
	op(EPFRollInterpType::Linear) \
	op(EPFRollInterpType::LinearStable) \
	op(EPFRollInterpType::Cubic) \
	op(EPFRollInterpType::CubicClamped) 

enum class EPFRollInterpType : uint8;
template<> PATHFOLLOW_API UEnum* StaticEnum<EPFRollInterpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

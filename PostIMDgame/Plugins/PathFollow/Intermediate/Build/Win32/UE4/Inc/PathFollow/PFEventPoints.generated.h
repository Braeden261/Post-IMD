// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPFPathFollowerComponent;
class UObject;
#ifdef PATHFOLLOW_PFEventPoints_generated_h
#error "PFEventPoints.generated.h already included, missing '#pragma once' in PFEventPoints.h"
#endif
#define PATHFOLLOW_PFEventPoints_generated_h

#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPFEventPoints_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__AllEventHolder() { return STRUCT_OFFSET(FPFEventPoints, AllEventHolder); } \
	FORCEINLINE static uint32 __PPO__Holders() { return STRUCT_OFFSET(FPFEventPoints, Holders); }


template<> PATHFOLLOW_API UScriptStruct* StaticStruct<struct FPFEventPoints>();

#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPFEventPointsVisualization_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PATHFOLLOW_API UScriptStruct* StaticStruct<struct FPFEventPointsVisualization>();

#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventPoint_Statics; \
	PATHFOLLOW_API static class UScriptStruct* StaticStruct();


template<> PATHFOLLOW_API UScriptStruct* StaticStruct<struct FEventPoint>();

#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_56_DELEGATE \
struct _Script_PathFollow_eventEventPointReachedSignature_Parms \
{ \
	UPFPathFollowerComponent* FollowerComp; \
	float Distance; \
	UObject* ExtraData; \
}; \
static inline void FEventPointReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& EventPointReachedSignature, UPFPathFollowerComponent* FollowerComp, float Distance, UObject* ExtraData) \
{ \
	_Script_PathFollow_eventEventPointReachedSignature_Parms Parms; \
	Parms.FollowerComp=FollowerComp; \
	Parms.Distance=Distance; \
	Parms.ExtraData=ExtraData; \
	EventPointReachedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_SPARSE_DATA
#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_RPC_WRAPPERS
#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventPointDelegateHolder(); \
	friend struct Z_Construct_UClass_UEventPointDelegateHolder_Statics; \
public: \
	DECLARE_CLASS(UEventPointDelegateHolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFollow"), NO_API) \
	DECLARE_SERIALIZER(UEventPointDelegateHolder)


#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUEventPointDelegateHolder(); \
	friend struct Z_Construct_UClass_UEventPointDelegateHolder_Statics; \
public: \
	DECLARE_CLASS(UEventPointDelegateHolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFollow"), NO_API) \
	DECLARE_SERIALIZER(UEventPointDelegateHolder)


#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventPointDelegateHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventPointDelegateHolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventPointDelegateHolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventPointDelegateHolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventPointDelegateHolder(UEventPointDelegateHolder&&); \
	NO_API UEventPointDelegateHolder(const UEventPointDelegateHolder&); \
public:


#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventPointDelegateHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventPointDelegateHolder(UEventPointDelegateHolder&&); \
	NO_API UEventPointDelegateHolder(const UEventPointDelegateHolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventPointDelegateHolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventPointDelegateHolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventPointDelegateHolder)


#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_58_PROLOG
#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_SPARSE_DATA \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_RPC_WRAPPERS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_INCLASS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_SPARSE_DATA \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h_62_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFOLLOW_API UClass* StaticClass<class UEventPointDelegateHolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_PathFollow_Source_PathFollow_Classes_PFEventPoints_h


#define FOREACH_ENUM_EPFEVENTFIREMODE(op) \
	op(EPFEventFireMode::Forward) \
	op(EPFEventFireMode::Reverse) \
	op(EPFEventFireMode::Always) 

enum class EPFEventFireMode : uint8;
template<> PATHFOLLOW_API UEnum* StaticEnum<EPFEventFireMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

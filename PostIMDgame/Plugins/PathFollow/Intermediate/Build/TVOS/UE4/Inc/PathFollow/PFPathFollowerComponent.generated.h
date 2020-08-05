// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPFPathFollowerComponent;
struct FRotator;
class USceneComponent;
struct FVector;
struct FEventPoint;
class UEventPointDelegateHolder;
class AActor;
class USplineComponent;
class UPFPathComponent;
struct FPFEventPoints;
#ifdef PATHFOLLOW_PFPathFollowerComponent_generated_h
#error "PFPathFollowerComponent.generated.h already included, missing '#pragma once' in PFPathFollowerComponent.h"
#endif
#define PATHFOLLOW_PFPathFollowerComponent_generated_h

#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_742_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathFollowerInstanceData_Statics; \
	PATHFOLLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> PATHFOLLOW_API UScriptStruct* StaticStruct<struct FPathFollowerInstanceData>();

#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_38_DELEGATE \
struct _Script_PathFollow_eventStartPathSignature_Parms \
{ \
	UPFPathFollowerComponent* followerComp; \
}; \
static inline void FStartPathSignature_DelegateWrapper(const FMulticastScriptDelegate& StartPathSignature, UPFPathFollowerComponent* followerComp) \
{ \
	_Script_PathFollow_eventStartPathSignature_Parms Parms; \
	Parms.followerComp=followerComp; \
	StartPathSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_37_DELEGATE \
struct _Script_PathFollow_eventReachedStartSignature_Parms \
{ \
	UPFPathFollowerComponent* followerComp; \
}; \
static inline void FReachedStartSignature_DelegateWrapper(const FMulticastScriptDelegate& ReachedStartSignature, UPFPathFollowerComponent* followerComp) \
{ \
	_Script_PathFollow_eventReachedStartSignature_Parms Parms; \
	Parms.followerComp=followerComp; \
	ReachedStartSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_36_DELEGATE \
struct _Script_PathFollow_eventReachedEndSignature_Parms \
{ \
	UPFPathFollowerComponent* followerComp; \
}; \
static inline void FReachedEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ReachedEndSignature, UPFPathFollowerComponent* followerComp) \
{ \
	_Script_PathFollow_eventReachedEndSignature_Parms Parms; \
	Parms.followerComp=followerComp; \
	ReachedEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_SPARSE_DATA
#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_RPC_WRAPPERS \
	virtual FRotator ComputeLookAtRotation_Implementation(USceneComponent* TargetComponent, FVector const& FollowerLocation); \
	virtual FRotator ModifyFinalRotation_Implementation(FRotator const& NewRotation); \
	virtual FVector ModifyFinalLocation_Implementation(FVector const& NewLocation); \
 \
	DECLARE_FUNCTION(execStartImpl); \
	DECLARE_FUNCTION(execUpdateAutoRotationPoints); \
	DECLARE_FUNCTION(execComputeAutoRotationPoints); \
	DECLARE_FUNCTION(execComputeLookAtRotation); \
	DECLARE_FUNCTION(execModifyFinalRotation); \
	DECLARE_FUNCTION(execModifyFinalLocation); \
	DECLARE_FUNCTION(execGetMoveDirection); \
	DECLARE_FUNCTION(execSetCurrentDistance); \
	DECLARE_FUNCTION(execGetLocationAtDistance); \
	DECLARE_FUNCTION(execGetRotationAtDistance); \
	DECLARE_FUNCTION(execGetSpeedAtSpeedPoint); \
	DECLARE_FUNCTION(execGetSpeedAtDistance); \
	DECLARE_FUNCTION(execEventPointExistByName); \
	DECLARE_FUNCTION(execGetEventPointByName); \
	DECLARE_FUNCTION(execGetEventPointDelegateAll); \
	DECLARE_FUNCTION(execGetEventPointDelegateByIndex); \
	DECLARE_FUNCTION(execGetEventPointDelegateByName); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execGetPathOwner); \
	DECLARE_FUNCTION(execSetPathOwner); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execFollowPath); \
	DECLARE_FUNCTION(execHasPath); \
	DECLARE_FUNCTION(execSetPathToFollow); \
	DECLARE_FUNCTION(execGetPathToFollow); \
	DECLARE_FUNCTION(execGetEventPoints);


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FRotator ComputeLookAtRotation_Implementation(USceneComponent* TargetComponent, FVector const& FollowerLocation); \
	virtual FRotator ModifyFinalRotation_Implementation(FRotator const& NewRotation); \
	virtual FVector ModifyFinalLocation_Implementation(FVector const& NewLocation); \
 \
	DECLARE_FUNCTION(execStartImpl); \
	DECLARE_FUNCTION(execUpdateAutoRotationPoints); \
	DECLARE_FUNCTION(execComputeAutoRotationPoints); \
	DECLARE_FUNCTION(execComputeLookAtRotation); \
	DECLARE_FUNCTION(execModifyFinalRotation); \
	DECLARE_FUNCTION(execModifyFinalLocation); \
	DECLARE_FUNCTION(execGetMoveDirection); \
	DECLARE_FUNCTION(execSetCurrentDistance); \
	DECLARE_FUNCTION(execGetLocationAtDistance); \
	DECLARE_FUNCTION(execGetRotationAtDistance); \
	DECLARE_FUNCTION(execGetSpeedAtSpeedPoint); \
	DECLARE_FUNCTION(execGetSpeedAtDistance); \
	DECLARE_FUNCTION(execEventPointExistByName); \
	DECLARE_FUNCTION(execGetEventPointByName); \
	DECLARE_FUNCTION(execGetEventPointDelegateAll); \
	DECLARE_FUNCTION(execGetEventPointDelegateByIndex); \
	DECLARE_FUNCTION(execGetEventPointDelegateByName); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execGetPathOwner); \
	DECLARE_FUNCTION(execSetPathOwner); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execFollowPath); \
	DECLARE_FUNCTION(execHasPath); \
	DECLARE_FUNCTION(execSetPathToFollow); \
	DECLARE_FUNCTION(execGetPathToFollow); \
	DECLARE_FUNCTION(execGetEventPoints);


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_EVENT_PARMS \
	struct PFPathFollowerComponent_eventComputeLookAtRotation_Parms \
	{ \
		USceneComponent* TargetComponent; \
		FVector FollowerLocation; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PFPathFollowerComponent_eventComputeLookAtRotation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct PFPathFollowerComponent_eventModifyFinalLocation_Parms \
	{ \
		FVector NewLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PFPathFollowerComponent_eventModifyFinalLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct PFPathFollowerComponent_eventModifyFinalRotation_Parms \
	{ \
		FRotator NewRotation; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PFPathFollowerComponent_eventModifyFinalRotation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_CALLBACK_WRAPPERS
#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFPathFollowerComponent(); \
	friend struct Z_Construct_UClass_UPFPathFollowerComponent_Statics; \
public: \
	DECLARE_CLASS(UPFPathFollowerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathFollow"), NO_API) \
	DECLARE_SERIALIZER(UPFPathFollowerComponent)


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUPFPathFollowerComponent(); \
	friend struct Z_Construct_UClass_UPFPathFollowerComponent_Statics; \
public: \
	DECLARE_CLASS(UPFPathFollowerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathFollow"), NO_API) \
	DECLARE_SERIALIZER(UPFPathFollowerComponent)


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFPathFollowerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFPathFollowerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFPathFollowerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFPathFollowerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFPathFollowerComponent(UPFPathFollowerComponent&&); \
	NO_API UPFPathFollowerComponent(const UPFPathFollowerComponent&); \
public:


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFPathFollowerComponent(UPFPathFollowerComponent&&); \
	NO_API UPFPathFollowerComponent(const UPFPathFollowerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFPathFollowerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFPathFollowerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPFPathFollowerComponent)


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pathOwner() { return STRUCT_OFFSET(UPFPathFollowerComponent, pathOwner); } \
	FORCEINLINE static uint32 __PPO__SplineToFollow() { return STRUCT_OFFSET(UPFPathFollowerComponent, SplineToFollow); } \
	FORCEINLINE static uint32 __PPO___pathDuration() { return STRUCT_OFFSET(UPFPathFollowerComponent, _pathDuration); } \
	FORCEINLINE static uint32 __PPO___currSplineLength() { return STRUCT_OFFSET(UPFPathFollowerComponent, _currSplineLength); } \
	FORCEINLINE static uint32 __PPO___ElapsedTime() { return STRUCT_OFFSET(UPFPathFollowerComponent, _ElapsedTime); } \
	FORCEINLINE static uint32 __PPO___DelayTimer() { return STRUCT_OFFSET(UPFPathFollowerComponent, _DelayTimer); } \
	FORCEINLINE static uint32 __PPO___lastTickTime() { return STRUCT_OFFSET(UPFPathFollowerComponent, _lastTickTime); } \
	FORCEINLINE static uint32 __PPO___LastPassedEventIndex() { return STRUCT_OFFSET(UPFPathFollowerComponent, _LastPassedEventIndex); }


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_67_PROLOG \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_EVENT_PARMS


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_SPARSE_DATA \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_RPC_WRAPPERS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_CALLBACK_WRAPPERS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_INCLASS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_SPARSE_DATA \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_CALLBACK_WRAPPERS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFOLLOW_API UClass* StaticClass<class UPFPathFollowerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_PathFollow_Source_PathFollow_Components_PFPathFollowerComponent_h


#define FOREACH_ENUM_EPFFACTOROPERATION(op) \
	op(EPFFactorOperation::None) \
	op(EPFFactorOperation::Add) \
	op(EPFFactorOperation::Mul) 

enum class EPFFactorOperation : uint8;
template<> PATHFOLLOW_API UEnum* StaticEnum<EPFFactorOperation>();

#define FOREACH_ENUM_EPFLOOPTYPE(op) \
	op(EPFLoopType::Replay) \
	op(EPFLoopType::ReplayFromStart) \
	op(EPFLoopType::PingPong) 

enum class EPFLoopType : uint8;
template<> PATHFOLLOW_API UEnum* StaticEnum<EPFLoopType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
class USceneComponent;
#ifdef POSTIMDGAME_ComponentFunctions_generated_h
#error "ComponentFunctions.generated.h already included, missing '#pragma once' in ComponentFunctions.h"
#endif
#define POSTIMDGAME_ComponentFunctions_generated_h

#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_SPARSE_DATA
#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddComponentToObject);


#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddComponentToObject);


#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentFunctions(); \
	friend struct Z_Construct_UClass_UComponentFunctions_Statics; \
public: \
	DECLARE_CLASS(UComponentFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PostIMDgame"), NO_API) \
	DECLARE_SERIALIZER(UComponentFunctions)


#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUComponentFunctions(); \
	friend struct Z_Construct_UClass_UComponentFunctions_Statics; \
public: \
	DECLARE_CLASS(UComponentFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PostIMDgame"), NO_API) \
	DECLARE_SERIALIZER(UComponentFunctions)


#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentFunctions(UComponentFunctions&&); \
	NO_API UComponentFunctions(const UComponentFunctions&); \
public:


#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentFunctions(UComponentFunctions&&); \
	NO_API UComponentFunctions(const UComponentFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentFunctions)


#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_PRIVATE_PROPERTY_OFFSET
#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_12_PROLOG
#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_SPARSE_DATA \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_RPC_WRAPPERS \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_INCLASS \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_SPARSE_DATA \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_INCLASS_NO_PURE_DECLS \
	PostIMDgame_Source_PostIMDgame_ComponentFunctions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSTIMDGAME_API UClass* StaticClass<class UComponentFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostIMDgame_Source_PostIMDgame_ComponentFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

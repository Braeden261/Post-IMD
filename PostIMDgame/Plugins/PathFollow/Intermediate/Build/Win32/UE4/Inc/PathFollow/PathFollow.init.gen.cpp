// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFollow_init() {}
	PATHFOLLOW_API UFunction* Z_Construct_UDelegateFunction_PathFollow_EventPointReachedSignature__DelegateSignature();
	PATHFOLLOW_API UFunction* Z_Construct_UDelegateFunction_PathFollow_ReachedEndSignature__DelegateSignature();
	PATHFOLLOW_API UFunction* Z_Construct_UDelegateFunction_PathFollow_ReachedStartSignature__DelegateSignature();
	PATHFOLLOW_API UFunction* Z_Construct_UDelegateFunction_PathFollow_StartPathSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PathFollow()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PathFollow_EventPointReachedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PathFollow_ReachedEndSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PathFollow_ReachedStartSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PathFollow_StartPathSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/PathFollow",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC5B99487,
				0xDE77C4E8,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
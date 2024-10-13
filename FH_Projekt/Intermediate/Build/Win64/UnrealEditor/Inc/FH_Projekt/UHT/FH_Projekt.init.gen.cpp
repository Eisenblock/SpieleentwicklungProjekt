// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFH_Projekt_init() {}
	FH_PROJEKT_API UFunction* Z_Construct_UDelegateFunction_FH_Projekt_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FH_Projekt;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FH_Projekt()
	{
		if (!Z_Registration_Info_UPackage__Script_FH_Projekt.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FH_Projekt_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FH_Projekt",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x54942AE7,
				0xC5F9591A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FH_Projekt.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FH_Projekt.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FH_Projekt(Z_Construct_UPackage__Script_FH_Projekt, TEXT("/Script/FH_Projekt"), Z_Registration_Info_UPackage__Script_FH_Projekt, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x54942AE7, 0xC5F9591A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

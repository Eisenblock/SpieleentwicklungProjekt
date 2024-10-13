// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FH_ProjektProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FH_PROJEKT_FH_ProjektProjectile_generated_h
#error "FH_ProjektProjectile.generated.h already included, missing '#pragma once' in FH_ProjektProjectile.h"
#endif
#define FH_PROJEKT_FH_ProjektProjectile_generated_h

#define FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFH_ProjektProjectile(); \
	friend struct Z_Construct_UClass_AFH_ProjektProjectile_Statics; \
public: \
	DECLARE_CLASS(AFH_ProjektProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FH_Projekt"), NO_API) \
	DECLARE_SERIALIZER(AFH_ProjektProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFH_ProjektProjectile(AFH_ProjektProjectile&&); \
	AFH_ProjektProjectile(const AFH_ProjektProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFH_ProjektProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFH_ProjektProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFH_ProjektProjectile) \
	NO_API virtual ~AFH_ProjektProjectile();


#define FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_12_PROLOG
#define FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FH_PROJEKT_API UClass* StaticClass<class AFH_ProjektProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

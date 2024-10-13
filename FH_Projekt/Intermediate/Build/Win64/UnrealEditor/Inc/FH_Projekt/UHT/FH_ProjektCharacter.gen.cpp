// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FH_Projekt/FH_ProjektCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFH_ProjektCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
FH_PROJEKT_API UClass* Z_Construct_UClass_AFH_ProjektCharacter();
FH_PROJEKT_API UClass* Z_Construct_UClass_AFH_ProjektCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FH_Projekt();
// End Cross Module References

// Begin Class AFH_ProjektCharacter
void AFH_ProjektCharacter::StaticRegisterNativesAFH_ProjektCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFH_ProjektCharacter);
UClass* Z_Construct_UClass_AFH_ProjektCharacter_NoRegister()
{
	return AFH_ProjektCharacter::StaticClass();
}
struct Z_Construct_UClass_AFH_ProjektCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FH_ProjektCharacter.h" },
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reload_anim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shoot_anim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p_weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FH_ProjektCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reload_anim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shoot_anim;
	static const UECodeGen_Private::FClassPropertyParams NewProp_p_weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFH_ProjektCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_reload_anim = { "reload_anim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, reload_anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reload_anim_MetaData), NewProp_reload_anim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_shoot_anim = { "shoot_anim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, shoot_anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shoot_anim_MetaData), NewProp_shoot_anim_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_p_weapon = { "p_weapon", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFH_ProjektCharacter, p_weapon), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p_weapon_MetaData), NewProp_p_weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFH_ProjektCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_reload_anim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_shoot_anim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFH_ProjektCharacter_Statics::NewProp_p_weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFH_ProjektCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFH_ProjektCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FH_Projekt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFH_ProjektCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFH_ProjektCharacter_Statics::ClassParams = {
	&AFH_ProjektCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFH_ProjektCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFH_ProjektCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFH_ProjektCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFH_ProjektCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFH_ProjektCharacter()
{
	if (!Z_Registration_Info_UClass_AFH_ProjektCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFH_ProjektCharacter.OuterSingleton, Z_Construct_UClass_AFH_ProjektCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFH_ProjektCharacter.OuterSingleton;
}
template<> FH_PROJEKT_API UClass* StaticClass<AFH_ProjektCharacter>()
{
	return AFH_ProjektCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFH_ProjektCharacter);
AFH_ProjektCharacter::~AFH_ProjektCharacter() {}
// End Class AFH_ProjektCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFH_ProjektCharacter, AFH_ProjektCharacter::StaticClass, TEXT("AFH_ProjektCharacter"), &Z_Registration_Info_UClass_AFH_ProjektCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFH_ProjektCharacter), 2197762552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektCharacter_h_3672298989(TEXT("/Script/FH_Projekt"),
	Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

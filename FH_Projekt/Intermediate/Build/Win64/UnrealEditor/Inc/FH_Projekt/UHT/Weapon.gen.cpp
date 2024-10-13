// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FH_Projekt/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
FH_PROJEKT_API UClass* Z_Construct_UClass_AWeapon();
FH_PROJEKT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
FH_PROJEKT_API UClass* Z_Construct_UClass_UTP_WeaponComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FH_Projekt();
// End Cross Module References

// Begin Class AWeapon
void AWeapon::StaticRegisterNativesAWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
UClass* Z_Construct_UClass_AWeapon_NoRegister()
{
	return AWeapon::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weapon Mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fire_sound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fire sound\n" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire sound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_empty_sound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Empty sound\n" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Empty sound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "GamePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Muzzle offset\n" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Muzzle offset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_muzzle_flash_MetaData[] = {
		{ "Category", "GamePlay" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponComponent_MetaData[] = {
		{ "Category", "GamePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weapon component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_current_ammo_MetaData[] = {
		{ "Category", "GamePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ammo variables\n" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ammo variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_max_ammo_MetaData[] = {
		{ "Category", "GamePlay" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fire_sound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_empty_sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_muzzle_flash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_current_ammo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_max_ammo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_weaponMesh = { "weaponMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, weaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponMesh_MetaData), NewProp_weaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_fire_sound = { "fire_sound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, fire_sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fire_sound_MetaData), NewProp_fire_sound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_empty_sound = { "empty_sound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, empty_sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_empty_sound_MetaData), NewProp_empty_sound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleOffset_MetaData), NewProp_MuzzleOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_muzzle_flash = { "muzzle_flash", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, muzzle_flash), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_muzzle_flash_MetaData), NewProp_muzzle_flash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_weaponComponent = { "weaponComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, weaponComponent), Z_Construct_UClass_UTP_WeaponComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponComponent_MetaData), NewProp_weaponComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_current_ammo = { "current_ammo", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, current_ammo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_current_ammo_MetaData), NewProp_current_ammo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_max_ammo = { "max_ammo", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, max_ammo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_max_ammo_MetaData), NewProp_max_ammo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_weaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_fire_sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_empty_sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_muzzle_flash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_weaponComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_current_ammo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_max_ammo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FH_Projekt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon()
{
	if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
}
template<> FH_PROJEKT_API UClass* StaticClass<AWeapon>()
{
	return AWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
AWeapon::~AWeapon() {}
// End Class AWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 3491140697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Weapon_h_1577335216(TEXT("/Script/FH_Projekt"),
	Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

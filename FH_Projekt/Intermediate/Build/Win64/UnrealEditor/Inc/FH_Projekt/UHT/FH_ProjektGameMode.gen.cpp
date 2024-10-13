// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FH_Projekt/FH_ProjektGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFH_ProjektGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FH_PROJEKT_API UClass* Z_Construct_UClass_AFH_ProjektGameMode();
FH_PROJEKT_API UClass* Z_Construct_UClass_AFH_ProjektGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FH_Projekt();
// End Cross Module References

// Begin Class AFH_ProjektGameMode
void AFH_ProjektGameMode::StaticRegisterNativesAFH_ProjektGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFH_ProjektGameMode);
UClass* Z_Construct_UClass_AFH_ProjektGameMode_NoRegister()
{
	return AFH_ProjektGameMode::StaticClass();
}
struct Z_Construct_UClass_AFH_ProjektGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FH_ProjektGameMode.h" },
		{ "ModuleRelativePath", "FH_ProjektGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFH_ProjektGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFH_ProjektGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FH_Projekt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFH_ProjektGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFH_ProjektGameMode_Statics::ClassParams = {
	&AFH_ProjektGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFH_ProjektGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFH_ProjektGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFH_ProjektGameMode()
{
	if (!Z_Registration_Info_UClass_AFH_ProjektGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFH_ProjektGameMode.OuterSingleton, Z_Construct_UClass_AFH_ProjektGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFH_ProjektGameMode.OuterSingleton;
}
template<> FH_PROJEKT_API UClass* StaticClass<AFH_ProjektGameMode>()
{
	return AFH_ProjektGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFH_ProjektGameMode);
AFH_ProjektGameMode::~AFH_ProjektGameMode() {}
// End Class AFH_ProjektGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFH_ProjektGameMode, AFH_ProjektGameMode::StaticClass, TEXT("AFH_ProjektGameMode"), &Z_Registration_Info_UClass_AFH_ProjektGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFH_ProjektGameMode), 1165105932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektGameMode_h_1861574291(TEXT("/Script/FH_Projekt"),
	Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_FH_ProjektGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FH_Projekt/Enemy_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Controller() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
FH_PROJEKT_API UClass* Z_Construct_UClass_AEnemy_Controller();
FH_PROJEKT_API UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister();
UPackage* Z_Construct_UPackage__Script_FH_Projekt();
// End Cross Module References

// Begin Class AEnemy_Controller
void AEnemy_Controller::StaticRegisterNativesAEnemy_Controller()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Controller);
UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister()
{
	return AEnemy_Controller::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Controller_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy_Controller.h" },
		{ "ModuleRelativePath", "Enemy_Controller.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Controller>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Controller, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComponent_MetaData), NewProp_BehaviorTreeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Controller, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Controller, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComponent_MetaData), NewProp_BlackboardComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_BehaviorTreeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_BlackboardComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_Controller_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_FH_Projekt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams = {
	&AEnemy_Controller::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_Controller()
{
	if (!Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton, Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton;
}
template<> FH_PROJEKT_API UClass* StaticClass<AEnemy_Controller>()
{
	return AEnemy_Controller::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Controller);
AEnemy_Controller::~AEnemy_Controller() {}
// End Class AEnemy_Controller

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Enemy_Controller_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Controller, AEnemy_Controller::StaticClass, TEXT("AEnemy_Controller"), &Z_Registration_Info_UClass_AEnemy_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Controller), 814558199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Enemy_Controller_h_1093623124(TEXT("/Script/FH_Projekt"),
	Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Enemy_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_paulk_OneDrive_Dokumente_Unreal_Projects_FH_Projekt_Source_FH_Projekt_Enemy_Controller_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

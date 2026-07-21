// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/basepawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodebasepawn() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Abasepawn();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Abasepawn_NoRegister();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Aprojectile_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Abasepawn ****************************************************************
void Abasepawn::StaticRegisterNativesAbasepawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Abasepawn;
UClass* Abasepawn::GetPrivateStaticClass()
{
	using TClass = Abasepawn;
	if (!Z_Registration_Info_UClass_Abasepawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("basepawn"),
			Z_Registration_Info_UClass_Abasepawn.InnerSingleton,
			StaticRegisterNativesAbasepawn,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_Abasepawn.InnerSingleton;
}
UClass* Z_Construct_UClass_Abasepawn_NoRegister()
{
	return Abasepawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Abasepawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "basepawn.h" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_explodeaudio_MetaData[] = {
		{ "Category", "basepawn" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deathparticles_MetaData[] = {
		{ "Category", "basepawn" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_capsulecomp_MetaData[] = {
		{ "Category", "basepawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_basemesh_MetaData[] = {
		{ "Category", "basepawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turrentmesh_MetaData[] = {
		{ "Category", "basepawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectilespawnpoint_MetaData[] = {
		{ "Category", "basepawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileclass_MetaData[] = {
		{ "Category", "basepawn" },
		{ "ModuleRelativePath", "basepawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_explodeaudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_deathparticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_capsulecomp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_basemesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_turrentmesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_projectilespawnpoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_projectileclass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abasepawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abasepawn_Statics::NewProp_explodeaudio = { "explodeaudio", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abasepawn, explodeaudio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_explodeaudio_MetaData), NewProp_explodeaudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abasepawn_Statics::NewProp_deathparticles = { "deathparticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abasepawn, deathparticles), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deathparticles_MetaData), NewProp_deathparticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abasepawn_Statics::NewProp_capsulecomp = { "capsulecomp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abasepawn, capsulecomp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_capsulecomp_MetaData), NewProp_capsulecomp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abasepawn_Statics::NewProp_basemesh = { "basemesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abasepawn, basemesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_basemesh_MetaData), NewProp_basemesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abasepawn_Statics::NewProp_turrentmesh = { "turrentmesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abasepawn, turrentmesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turrentmesh_MetaData), NewProp_turrentmesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abasepawn_Statics::NewProp_projectilespawnpoint = { "projectilespawnpoint", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abasepawn, projectilespawnpoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectilespawnpoint_MetaData), NewProp_projectilespawnpoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_Abasepawn_Statics::NewProp_projectileclass = { "projectileclass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abasepawn, projectileclass), Z_Construct_UClass_UClass, Z_Construct_UClass_Aprojectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileclass_MetaData), NewProp_projectileclass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Abasepawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasepawn_Statics::NewProp_explodeaudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasepawn_Statics::NewProp_deathparticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasepawn_Statics::NewProp_capsulecomp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasepawn_Statics::NewProp_basemesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasepawn_Statics::NewProp_turrentmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasepawn_Statics::NewProp_projectilespawnpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasepawn_Statics::NewProp_projectileclass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abasepawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Abasepawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abasepawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Abasepawn_Statics::ClassParams = {
	&Abasepawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Abasepawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Abasepawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abasepawn_Statics::Class_MetaDataParams), Z_Construct_UClass_Abasepawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Abasepawn()
{
	if (!Z_Registration_Info_UClass_Abasepawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Abasepawn.OuterSingleton, Z_Construct_UClass_Abasepawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Abasepawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Abasepawn);
Abasepawn::~Abasepawn() {}
// ********** End Class Abasepawn ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Abasepawn, Abasepawn::StaticClass, TEXT("Abasepawn"), &Z_Registration_Info_UClass_Abasepawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Abasepawn), 2591509319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h__Script_BattleBlaster_1086201005(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/tank.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodetank() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Abasepawn();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Atank();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Atank_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Atank ********************************************************************
void Atank::StaticRegisterNativesAtank()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Atank;
UClass* Atank::GetPrivateStaticClass()
{
	using TClass = Atank;
	if (!Z_Registration_Info_UClass_Atank.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("tank"),
			Z_Registration_Info_UClass_Atank.InnerSingleton,
			StaticRegisterNativesAtank,
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
	return Z_Registration_Info_UClass_Atank.InnerSingleton;
}
UClass* Z_Construct_UClass_Atank_NoRegister()
{
	return Atank::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Atank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "tank.h" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultmappingcontext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveaction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turnaction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireaction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ucamerashake_MetaData[] = {
		{ "Category", "tank" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_springarmcomp_MetaData[] = {
		{ "Category", "tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cameracomp_MetaData[] = {
		{ "Category", "tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "tank" },
		{ "ModuleRelativePath", "tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turnspeed_MetaData[] = {
		{ "Category", "tank" },
		{ "ModuleRelativePath", "tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultmappingcontext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveaction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_turnaction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fireaction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ucamerashake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_springarmcomp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cameracomp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_turnspeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_defaultmappingcontext = { "defaultmappingcontext", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, defaultmappingcontext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultmappingcontext_MetaData), NewProp_defaultmappingcontext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_moveaction = { "moveaction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, moveaction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveaction_MetaData), NewProp_moveaction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_turnaction = { "turnaction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, turnaction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turnaction_MetaData), NewProp_turnaction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_fireaction = { "fireaction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, fireaction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireaction_MetaData), NewProp_fireaction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_ucamerashake = { "ucamerashake", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, ucamerashake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ucamerashake_MetaData), NewProp_ucamerashake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_springarmcomp = { "springarmcomp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, springarmcomp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_springarmcomp_MetaData), NewProp_springarmcomp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_cameracomp = { "cameracomp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, cameracomp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cameracomp_MetaData), NewProp_cameracomp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Atank_Statics::NewProp_turnspeed = { "turnspeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Atank, turnspeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turnspeed_MetaData), NewProp_turnspeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Atank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_defaultmappingcontext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_moveaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_turnaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_fireaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_ucamerashake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_springarmcomp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_cameracomp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atank_Statics::NewProp_turnspeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Atank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Atank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_Abasepawn,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Atank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Atank_Statics::ClassParams = {
	&Atank::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Atank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Atank_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Atank_Statics::Class_MetaDataParams), Z_Construct_UClass_Atank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Atank()
{
	if (!Z_Registration_Info_UClass_Atank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atank.OuterSingleton, Z_Construct_UClass_Atank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Atank.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Atank);
Atank::~Atank() {}
// ********** End Class Atank **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Atank, Atank::StaticClass, TEXT("Atank"), &Z_Registration_Info_UClass_Atank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atank), 1308845555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h__Script_BattleBlaster_3379731586(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

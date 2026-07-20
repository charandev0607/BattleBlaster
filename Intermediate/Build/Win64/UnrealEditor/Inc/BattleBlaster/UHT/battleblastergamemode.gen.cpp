// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/battleblastergamemode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodebattleblastergamemode() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Abattleblastergamemode();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Abattleblastergamemode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Abattleblastergamemode ***************************************************
void Abattleblastergamemode::StaticRegisterNativesAbattleblastergamemode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Abattleblastergamemode;
UClass* Abattleblastergamemode::GetPrivateStaticClass()
{
	using TClass = Abattleblastergamemode;
	if (!Z_Registration_Info_UClass_Abattleblastergamemode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("battleblastergamemode"),
			Z_Registration_Info_UClass_Abattleblastergamemode.InnerSingleton,
			StaticRegisterNativesAbattleblastergamemode,
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
	return Z_Registration_Info_UClass_Abattleblastergamemode.InnerSingleton;
}
UClass* Z_Construct_UClass_Abattleblastergamemode_NoRegister()
{
	return Abattleblastergamemode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Abattleblastergamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "battleblastergamemode.h" },
		{ "ModuleRelativePath", "battleblastergamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gameovertimer_MetaData[] = {
		{ "Category", "battleblastergamemode" },
		{ "ModuleRelativePath", "battleblastergamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gameovertimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abattleblastergamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Abattleblastergamemode_Statics::NewProp_gameovertimer = { "gameovertimer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abattleblastergamemode, gameovertimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gameovertimer_MetaData), NewProp_gameovertimer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Abattleblastergamemode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abattleblastergamemode_Statics::NewProp_gameovertimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abattleblastergamemode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Abattleblastergamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abattleblastergamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Abattleblastergamemode_Statics::ClassParams = {
	&Abattleblastergamemode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Abattleblastergamemode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Abattleblastergamemode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abattleblastergamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_Abattleblastergamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Abattleblastergamemode()
{
	if (!Z_Registration_Info_UClass_Abattleblastergamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Abattleblastergamemode.OuterSingleton, Z_Construct_UClass_Abattleblastergamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Abattleblastergamemode.OuterSingleton;
}
Abattleblastergamemode::Abattleblastergamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(Abattleblastergamemode);
Abattleblastergamemode::~Abattleblastergamemode() {}
// ********** End Class Abattleblastergamemode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_battleblastergamemode_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Abattleblastergamemode, Abattleblastergamemode::StaticClass, TEXT("Abattleblastergamemode"), &Z_Registration_Info_UClass_Abattleblastergamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Abattleblastergamemode), 1730307240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_battleblastergamemode_h__Script_BattleBlaster_410770328(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_battleblastergamemode_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_battleblastergamemode_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

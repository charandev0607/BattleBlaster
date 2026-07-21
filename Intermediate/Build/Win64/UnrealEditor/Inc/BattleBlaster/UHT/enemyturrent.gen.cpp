// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/enemyturrent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeenemyturrent() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Abasepawn();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Aenemyturrent();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Aenemyturrent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Aenemyturrent ************************************************************
void Aenemyturrent::StaticRegisterNativesAenemyturrent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Aenemyturrent;
UClass* Aenemyturrent::GetPrivateStaticClass()
{
	using TClass = Aenemyturrent;
	if (!Z_Registration_Info_UClass_Aenemyturrent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("enemyturrent"),
			Z_Registration_Info_UClass_Aenemyturrent.InnerSingleton,
			StaticRegisterNativesAenemyturrent,
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
	return Z_Registration_Info_UClass_Aenemyturrent.InnerSingleton;
}
UClass* Z_Construct_UClass_Aenemyturrent_NoRegister()
{
	return Aenemyturrent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Aenemyturrent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "enemyturrent.h" },
		{ "ModuleRelativePath", "enemyturrent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aenemyturrent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aenemyturrent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_Abasepawn,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aenemyturrent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aenemyturrent_Statics::ClassParams = {
	&Aenemyturrent::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aenemyturrent_Statics::Class_MetaDataParams), Z_Construct_UClass_Aenemyturrent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aenemyturrent()
{
	if (!Z_Registration_Info_UClass_Aenemyturrent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aenemyturrent.OuterSingleton, Z_Construct_UClass_Aenemyturrent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aenemyturrent.OuterSingleton;
}
Aenemyturrent::Aenemyturrent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aenemyturrent);
Aenemyturrent::~Aenemyturrent() {}
// ********** End Class Aenemyturrent **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_enemyturrent_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aenemyturrent, Aenemyturrent::StaticClass, TEXT("Aenemyturrent"), &Z_Registration_Info_UClass_Aenemyturrent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aenemyturrent), 445917816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_enemyturrent_h__Script_BattleBlaster_1208462418(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_enemyturrent_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_enemyturrent_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/screenmessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodescreenmessage() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Uscreenmessage();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Uscreenmessage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Uscreenmessage ***********************************************************
void Uscreenmessage::StaticRegisterNativesUscreenmessage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Uscreenmessage;
UClass* Uscreenmessage::GetPrivateStaticClass()
{
	using TClass = Uscreenmessage;
	if (!Z_Registration_Info_UClass_Uscreenmessage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("screenmessage"),
			Z_Registration_Info_UClass_Uscreenmessage.InnerSingleton,
			StaticRegisterNativesUscreenmessage,
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
	return Z_Registration_Info_UClass_Uscreenmessage.InnerSingleton;
}
UClass* Z_Construct_UClass_Uscreenmessage_NoRegister()
{
	return Uscreenmessage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Uscreenmessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "screenmessage.h" },
		{ "ModuleRelativePath", "screenmessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_messagetextblock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "screenmessage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "screenmessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_messagetextblock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uscreenmessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uscreenmessage_Statics::NewProp_messagetextblock = { "messagetextblock", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uscreenmessage, messagetextblock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_messagetextblock_MetaData), NewProp_messagetextblock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Uscreenmessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uscreenmessage_Statics::NewProp_messagetextblock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uscreenmessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Uscreenmessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uscreenmessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Uscreenmessage_Statics::ClassParams = {
	&Uscreenmessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Uscreenmessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Uscreenmessage_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uscreenmessage_Statics::Class_MetaDataParams), Z_Construct_UClass_Uscreenmessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Uscreenmessage()
{
	if (!Z_Registration_Info_UClass_Uscreenmessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Uscreenmessage.OuterSingleton, Z_Construct_UClass_Uscreenmessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Uscreenmessage.OuterSingleton;
}
Uscreenmessage::Uscreenmessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(Uscreenmessage);
Uscreenmessage::~Uscreenmessage() {}
// ********** End Class Uscreenmessage *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_screenmessage_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Uscreenmessage, Uscreenmessage::StaticClass, TEXT("Uscreenmessage"), &Z_Registration_Info_UClass_Uscreenmessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Uscreenmessage), 2785947824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_screenmessage_h__Script_BattleBlaster_3807038913(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_screenmessage_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_screenmessage_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

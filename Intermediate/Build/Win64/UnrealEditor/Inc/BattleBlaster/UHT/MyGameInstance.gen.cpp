// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/MyGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_UMyGameInstance();
BATTLEBLASTER_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyGameInstance **********************************************************
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyGameInstance;
UClass* UMyGameInstance::GetPrivateStaticClass()
{
	using TClass = UMyGameInstance;
	if (!Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyGameInstance"),
			Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton,
			StaticRegisterNativesUMyGameInstance,
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
	return Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentlevelindex_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lastlevelindex_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentlevelindex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_lastlevelindex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlevelindex = { "currentlevelindex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, currentlevelindex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentlevelindex_MetaData), NewProp_currentlevelindex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_lastlevelindex = { "lastlevelindex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, lastlevelindex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lastlevelindex_MetaData), NewProp_lastlevelindex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlevelindex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_lastlevelindex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// ********** End Class UMyGameInstance ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 2433342687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h__Script_BattleBlaster_667140911(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/health.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodehealth() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Uhealth();
BATTLEBLASTER_API UClass* Z_Construct_UClass_Uhealth_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Uhealth Function damagetaken *********************************************
struct Z_Construct_UFunction_Uhealth_damagetaken_Statics
{
	struct health_eventdamagetaken_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "health.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(health_eventdamagetaken_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(health_eventdamagetaken_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(health_eventdamagetaken_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(health_eventdamagetaken_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(health_eventdamagetaken_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uhealth_damagetaken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uhealth_damagetaken_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uhealth_damagetaken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uhealth_damagetaken_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Uhealth, nullptr, "damagetaken", Z_Construct_UFunction_Uhealth_damagetaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uhealth_damagetaken_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uhealth_damagetaken_Statics::health_eventdamagetaken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uhealth_damagetaken_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uhealth_damagetaken_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_Uhealth_damagetaken_Statics::health_eventdamagetaken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Uhealth_damagetaken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uhealth_damagetaken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Uhealth::execdamagetaken)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->damagetaken(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class Uhealth Function damagetaken ***********************************************

// ********** Begin Class Uhealth ******************************************************************
void Uhealth::StaticRegisterNativesUhealth()
{
	UClass* Class = Uhealth::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "damagetaken", &Uhealth::execdamagetaken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_Uhealth;
UClass* Uhealth::GetPrivateStaticClass()
{
	using TClass = Uhealth;
	if (!Z_Registration_Info_UClass_Uhealth.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("health"),
			Z_Registration_Info_UClass_Uhealth.InnerSingleton,
			StaticRegisterNativesUhealth,
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
	return Z_Registration_Info_UClass_Uhealth.InnerSingleton;
}
UClass* Z_Construct_UClass_Uhealth_NoRegister()
{
	return Uhealth::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Uhealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "health.h" },
		{ "ModuleRelativePath", "health.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxhealth_MetaData[] = {
		{ "Category", "health" },
		{ "ModuleRelativePath", "health.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
		{ "Category", "health" },
		{ "ModuleRelativePath", "health.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxhealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Uhealth_damagetaken, "damagetaken" }, // 244640146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uhealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Uhealth_Statics::NewProp_maxhealth = { "maxhealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uhealth, maxhealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxhealth_MetaData), NewProp_maxhealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Uhealth_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uhealth, health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_MetaData), NewProp_health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Uhealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uhealth_Statics::NewProp_maxhealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uhealth_Statics::NewProp_health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uhealth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Uhealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uhealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Uhealth_Statics::ClassParams = {
	&Uhealth::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_Uhealth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_Uhealth_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uhealth_Statics::Class_MetaDataParams), Z_Construct_UClass_Uhealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Uhealth()
{
	if (!Z_Registration_Info_UClass_Uhealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Uhealth.OuterSingleton, Z_Construct_UClass_Uhealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Uhealth.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Uhealth);
Uhealth::~Uhealth() {}
// ********** End Class Uhealth ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Uhealth, Uhealth::StaticClass, TEXT("Uhealth"), &Z_Registration_Info_UClass_Uhealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Uhealth), 2311957909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h__Script_BattleBlaster_3403665903(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

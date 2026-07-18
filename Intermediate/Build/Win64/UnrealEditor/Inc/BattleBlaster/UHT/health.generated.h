// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "health.h"

#ifdef BATTLEBLASTER_health_generated_h
#error "health.generated.h already included, missing '#pragma once' in health.h"
#endif
#define BATTLEBLASTER_health_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;

// ********** Begin Class Uhealth ******************************************************************
#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdamagetaken);


BATTLEBLASTER_API UClass* Z_Construct_UClass_Uhealth_NoRegister();

#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUhealth(); \
	friend struct Z_Construct_UClass_Uhealth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_Uhealth_NoRegister(); \
public: \
	DECLARE_CLASS2(Uhealth, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_Uhealth_NoRegister) \
	DECLARE_SERIALIZER(Uhealth)


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	Uhealth(Uhealth&&) = delete; \
	Uhealth(const Uhealth&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uhealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uhealth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Uhealth) \
	NO_API virtual ~Uhealth();


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_11_PROLOG
#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Uhealth;

// ********** End Class Uhealth ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_health_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "tank.h"

#ifdef BATTLEBLASTER_tank_generated_h
#error "tank.generated.h already included, missing '#pragma once' in tank.h"
#endif
#define BATTLEBLASTER_tank_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class Atank ********************************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Atank_NoRegister();

#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtank(); \
	friend struct Z_Construct_UClass_Atank_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_Atank_NoRegister(); \
public: \
	DECLARE_CLASS2(Atank, Abasepawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_Atank_NoRegister) \
	DECLARE_SERIALIZER(Atank)


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	Atank(Atank&&) = delete; \
	Atank(const Atank&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Atank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Atank) \
	NO_API virtual ~Atank();


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h_18_PROLOG
#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Atank;

// ********** End Class Atank **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_tank_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

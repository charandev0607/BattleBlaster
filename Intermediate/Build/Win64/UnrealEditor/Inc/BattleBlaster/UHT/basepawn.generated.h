// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "basepawn.h"

#ifdef BATTLEBLASTER_basepawn_generated_h
#error "basepawn.generated.h already included, missing '#pragma once' in basepawn.h"
#endif
#define BATTLEBLASTER_basepawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class Abasepawn ****************************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_Abasepawn_NoRegister();

#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbasepawn(); \
	friend struct Z_Construct_UClass_Abasepawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_Abasepawn_NoRegister(); \
public: \
	DECLARE_CLASS2(Abasepawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_Abasepawn_NoRegister) \
	DECLARE_SERIALIZER(Abasepawn)


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	Abasepawn(Abasepawn&&) = delete; \
	Abasepawn(const Abasepawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abasepawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abasepawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Abasepawn) \
	NO_API virtual ~Abasepawn();


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h_12_PROLOG
#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Abasepawn;

// ********** End Class Abasepawn ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_basepawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

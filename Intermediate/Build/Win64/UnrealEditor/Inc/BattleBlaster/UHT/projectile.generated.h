// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "projectile.h"

#ifdef BATTLEBLASTER_projectile_generated_h
#error "projectile.generated.h already included, missing '#pragma once' in projectile.h"
#endif
#define BATTLEBLASTER_projectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class Aprojectile **************************************************************
#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execonhit);


BATTLEBLASTER_API UClass* Z_Construct_UClass_Aprojectile_NoRegister();

#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprojectile(); \
	friend struct Z_Construct_UClass_Aprojectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_Aprojectile_NoRegister(); \
public: \
	DECLARE_CLASS2(Aprojectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_Aprojectile_NoRegister) \
	DECLARE_SERIALIZER(Aprojectile)


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	Aprojectile(Aprojectile&&) = delete; \
	Aprojectile(const Aprojectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprojectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprojectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprojectile) \
	NO_API virtual ~Aprojectile();


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_11_PROLOG
#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Aprojectile;

// ********** End Class Aprojectile ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_projectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

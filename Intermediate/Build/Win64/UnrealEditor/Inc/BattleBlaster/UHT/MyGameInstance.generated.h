// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameInstance.h"

#ifdef BATTLEBLASTER_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define BATTLEBLASTER_MyGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyGameInstance **********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();

#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_UMyGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyGameInstance(UMyGameInstance&&) = delete; \
	UMyGameInstance(const UMyGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	NO_API virtual ~UMyGameInstance();


#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h_12_PROLOG
#define FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyGameInstance;

// ********** End Class UMyGameInstance ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_charan_dev_Documents_Unreal_Projects_BattleBlasterStarterProject_Source_BattleBlaster_MyGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

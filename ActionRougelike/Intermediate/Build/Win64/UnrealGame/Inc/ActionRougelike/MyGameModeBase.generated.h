// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UEnvQueryInstanceBlueprintWrapper;
#ifdef ACTIONROUGELIKE_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define ACTIONROUGELIKE_MyGameModeBase_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMonsterInFoRow_Statics; \
	ACTIONROUGELIKE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ACTIONROUGELIKE_API UScriptStruct* StaticStruct<struct FMonsterInFoRow>();

#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadSaveGame); \
	DECLARE_FUNCTION(execWriteSaveGame); \
	DECLARE_FUNCTION(execKillAllAI); \
	DECLARE_FUNCTION(execOnActorKill); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execRespawnPlayerElasped); \
	DECLARE_FUNCTION(execSpawnCoinTimerElasped); \
	DECLARE_FUNCTION(execSpawnCoin); \
	DECLARE_FUNCTION(execSpawnBotTimerElasped); \
	DECLARE_FUNCTION(execSpawnBot);


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadSaveGame); \
	DECLARE_FUNCTION(execWriteSaveGame); \
	DECLARE_FUNCTION(execKillAllAI); \
	DECLARE_FUNCTION(execOnActorKill); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execRespawnPlayerElasped); \
	DECLARE_FUNCTION(execSpawnCoinTimerElasped); \
	DECLARE_FUNCTION(execSpawnCoin); \
	DECLARE_FUNCTION(execSpawnBotTimerElasped); \
	DECLARE_FUNCTION(execSpawnBot);


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameModeBase)


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_51_PROLOG
#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

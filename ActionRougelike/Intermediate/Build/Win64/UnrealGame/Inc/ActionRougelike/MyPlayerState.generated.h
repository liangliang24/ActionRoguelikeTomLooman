// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMySaveGame;
#ifdef ACTIONROUGELIKE_MyPlayerState_generated_h
#error "MyPlayerState.generated.h already included, missing '#pragma once' in MyPlayerState.h"
#endif
#define ACTIONROUGELIKE_MyPlayerState_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_RPC_WRAPPERS \
	virtual void LoadPlayerState_Implementation(UMySaveGame* MySaveGame); \
	virtual void SavePlayerState_Implementation(UMySaveGame* MySaveGame); \
 \
	DECLARE_FUNCTION(execLoadPlayerState); \
	DECLARE_FUNCTION(execSavePlayerState); \
	DECLARE_FUNCTION(execGetCredits);


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LoadPlayerState_Implementation(UMySaveGame* MySaveGame); \
	virtual void SavePlayerState_Implementation(UMySaveGame* MySaveGame); \
 \
	DECLARE_FUNCTION(execLoadPlayerState); \
	DECLARE_FUNCTION(execSavePlayerState); \
	DECLARE_FUNCTION(execGetCredits);


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_EVENT_PARMS \
	struct MyPlayerState_eventLoadPlayerState_Parms \
	{ \
		UMySaveGame* MySaveGame; \
	}; \
	struct MyPlayerState_eventSavePlayerState_Parms \
	{ \
		UMySaveGame* MySaveGame; \
	};


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_CALLBACK_WRAPPERS
#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerState(); \
	friend struct Z_Construct_UClass_AMyPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerState)


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerState(); \
	friend struct Z_Construct_UClass_AMyPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerState)


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerState(AMyPlayerState&&); \
	NO_API AMyPlayerState(const AMyPlayerState&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerState(AMyPlayerState&&); \
	NO_API AMyPlayerState(const AMyPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerState)


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_13_PROLOG \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_EVENT_PARMS


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class AMyPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

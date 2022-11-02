// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef ACTIONROUGELIKE_GameplayFunctionLibrary_generated_h
#error "GameplayFunctionLibrary.generated.h already included, missing '#pragma once' in GameplayFunctionLibrary.h"
#endif
#define ACTIONROUGELIKE_GameplayFunctionLibrary_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDirectionalDamage); \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDirectionalDamage); \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UGameplayFunctionLibrary)


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UGameplayFunctionLibrary)


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayFunctionLibrary(UGameplayFunctionLibrary&&); \
	NO_API UGameplayFunctionLibrary(const UGameplayFunctionLibrary&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayFunctionLibrary(UGameplayFunctionLibrary&&); \
	NO_API UGameplayFunctionLibrary(const UGameplayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayFunctionLibrary)


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_12_PROLOG
#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class UGameplayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

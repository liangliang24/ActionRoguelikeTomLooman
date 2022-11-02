// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ACTIONROUGELIKE_ActionEffect_generated_h
#error "ActionEffect.generated.h already included, missing '#pragma once' in ActionEffect.h"
#endif
#define ACTIONROUGELIKE_ActionEffect_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_RPC_WRAPPERS \
	virtual void ExecutePeriodcEffect_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecutePeriodcEffect);


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecutePeriodcEffect_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecutePeriodcEffect);


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_EVENT_PARMS \
	struct ActionEffect_eventExecutePeriodcEffect_Parms \
	{ \
		AActor* Instigator; \
	};


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_CALLBACK_WRAPPERS
#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionEffect(); \
	friend struct Z_Construct_UClass_UActionEffect_Statics; \
public: \
	DECLARE_CLASS(UActionEffect, UAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UActionEffect)


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActionEffect(); \
	friend struct Z_Construct_UClass_UActionEffect_Statics; \
public: \
	DECLARE_CLASS(UActionEffect, UAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UActionEffect)


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionEffect(UActionEffect&&); \
	NO_API UActionEffect(const UActionEffect&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionEffect(UActionEffect&&); \
	NO_API UActionEffect(const UActionEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionEffect)


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_12_PROLOG \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_EVENT_PARMS


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class UActionEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

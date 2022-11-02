// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActionComponent;
#ifdef ACTIONROUGELIKE_UAction_generated_h
#error "UAction.generated.h already included, missing '#pragma once' in UAction.h"
#endif
#define ACTIONROUGELIKE_UAction_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_RPC_WRAPPERS \
	virtual void StopAction_Implementation(AActor* Instigator); \
	virtual void StartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execGetOwningComponent);


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopAction_Implementation(AActor* Instigator); \
	virtual void StartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execGetOwningComponent);


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_EVENT_PARMS \
	struct Action_eventCanStart_Parms \
	{ \
		AActor* Instigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Action_eventCanStart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Action_eventStartAction_Parms \
	{ \
		AActor* Instigator; \
	}; \
	struct Action_eventStopAction_Parms \
	{ \
		AActor* Instigator; \
	};


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_CALLBACK_WRAPPERS
#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAction(); \
	friend struct Z_Construct_UClass_UAction_Statics; \
public: \
	DECLARE_CLASS(UAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UAction)


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAction(); \
	friend struct Z_Construct_UClass_UAction_Statics; \
public: \
	DECLARE_CLASS(UAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UAction)


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAction(UAction&&); \
	NO_API UAction(const UAction&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAction(UAction&&); \
	NO_API UAction(const UAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAction)


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_15_PROLOG \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_EVENT_PARMS


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class UAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

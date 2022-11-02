// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ACTIONROUGELIKE_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define ACTIONROUGELIKE_InteractionComponent_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_RPC_WRAPPERS \
	virtual void ServerInteract_Implementation(AActor* InFocus); \
 \
	DECLARE_FUNCTION(execServerInteract);


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerInteract_Implementation(AActor* InFocus); \
 \
	DECLARE_FUNCTION(execServerInteract);


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_EVENT_PARMS \
	struct InteractionComponent_eventServerInteract_Parms \
	{ \
		AActor* InFocus; \
	};


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_CALLBACK_WRAPPERS
#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionComponent)


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_11_PROLOG \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_EVENT_PARMS


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

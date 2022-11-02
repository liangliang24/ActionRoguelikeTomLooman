// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ACTIONROUGELIKE_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define ACTIONROUGELIKE_ProjectileBase_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_RPC_WRAPPERS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit);


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit);


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_EVENT_PARMS
#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_CALLBACK_WRAPPERS
#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase)


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_13_PROLOG \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_EVENT_PARMS


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_ProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

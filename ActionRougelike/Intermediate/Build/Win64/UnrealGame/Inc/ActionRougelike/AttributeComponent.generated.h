// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAttributeComponent;
#ifdef ACTIONROUGELIKE_AttributeComponent_generated_h
#error "AttributeComponent.generated.h already included, missing '#pragma once' in AttributeComponent.h"
#endif
#define ACTIONROUGELIKE_AttributeComponent_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_12_DELEGATE \
struct _Script_ActionRougelike_eventOnHealthChanged_Parms \
{ \
	AActor* InstigatorActor; \
	UAttributeComponent* OwningComp; \
	float NewHeawlth; \
	float Delta; \
}; \
static inline void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, AActor* InstigatorActor, UAttributeComponent* OwningComp, float NewHeawlth, float Delta) \
{ \
	_Script_ActionRougelike_eventOnHealthChanged_Parms Parms; \
	Parms.InstigatorActor=InstigatorActor; \
	Parms.OwningComp=OwningComp; \
	Parms.NewHeawlth=NewHeawlth; \
	Parms.Delta=Delta; \
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_13_DELEGATE \
struct _Script_ActionRougelike_eventOnCreditChanged_Parms \
{ \
	UAttributeComponent* OwningComp; \
	float NewCredit; \
	float Delta; \
}; \
static inline void FOnCreditChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCreditChanged, UAttributeComponent* OwningComp, float NewCredit, float Delta) \
{ \
	_Script_ActionRougelike_eventOnCreditChanged_Parms Parms; \
	Parms.OwningComp=OwningComp; \
	Parms.NewCredit=NewCredit; \
	Parms.Delta=Delta; \
	OnCreditChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHealthChange); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execSetCredit); \
	DECLARE_FUNCTION(execGetAttributes);


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHealthChange); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execSetCredit); \
	DECLARE_FUNCTION(execGetAttributes);


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeComponent(); \
	friend struct Z_Construct_UClass_UAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		HealthMax, \
		NETFIELD_REP_END=HealthMax	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeComponent(); \
	friend struct Z_Construct_UClass_UAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougelike"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		HealthMax, \
		NETFIELD_REP_END=HealthMax	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeComponent(UAttributeComponent&&); \
	NO_API UAttributeComponent(const UAttributeComponent&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeComponent(UAttributeComponent&&); \
	NO_API UAttributeComponent(const UAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeComponent)


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_14_PROLOG
#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_INCLASS \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class UAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

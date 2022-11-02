// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ACTIONROUGELIKE_GameplayInterface_generated_h
#error "GameplayInterface.generated.h already included, missing '#pragma once' in GameplayInterface.h"
#endif
#define ACTIONROUGELIKE_GameplayInterface_generated_h

#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_SPARSE_DATA
#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_RPC_WRAPPERS \
	virtual void OnActorLoaded_Implementation() {}; \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execOnActorLoaded); \
	DECLARE_FUNCTION(execInteract);


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActorLoaded_Implementation() {}; \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execOnActorLoaded); \
	DECLARE_FUNCTION(execInteract);


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_EVENT_PARMS \
	struct GameplayInterface_eventInteract_Parms \
	{ \
		APawn* InstigatorPawn; \
	};


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_CALLBACK_WRAPPERS
#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROUGELIKE_API UGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROUGELIKE_API, UGameplayInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROUGELIKE_API UGameplayInterface(UGameplayInterface&&); \
	ACTIONROUGELIKE_API UGameplayInterface(const UGameplayInterface&); \
public:


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROUGELIKE_API UGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROUGELIKE_API UGameplayInterface(UGameplayInterface&&); \
	ACTIONROUGELIKE_API UGameplayInterface(const UGameplayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROUGELIKE_API, UGameplayInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayInterface)


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayInterface(); \
	friend struct Z_Construct_UClass_UGameplayInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionRougelike"), ACTIONROUGELIKE_API) \
	DECLARE_SERIALIZER(UGameplayInterface)


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayInterface() {} \
public: \
	typedef UGameplayInterface UClassType; \
	typedef IGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	static void Execute_OnActorLoaded(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplayInterface() {} \
public: \
	typedef UGameplayInterface UClassType; \
	typedef IGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	static void Execute_OnActorLoaded(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_10_PROLOG \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_EVENT_PARMS


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_RPC_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_SPARSE_DATA \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_CALLBACK_WRAPPERS \
	FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGELIKE_API UClass* StaticClass<class UGameplayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

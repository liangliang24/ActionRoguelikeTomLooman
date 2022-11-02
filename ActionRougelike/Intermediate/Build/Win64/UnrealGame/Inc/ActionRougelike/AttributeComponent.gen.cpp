// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}
// Cross Module References
	ACTIONROUGELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
	ACTIONROUGELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAttributeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics
	{
		struct _Script_ActionRougelike_eventOnHealthChanged_Parms
		{
			AActor* InstigatorActor;
			UAttributeComponent* OwningComp;
			float NewHeawlth;
			float Delta;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHeawlth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRougelike_eventOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRougelike_eventOnHealthChanged_Parms, OwningComp), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHeawlth = { "NewHeawlth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRougelike_eventOnHealthChanged_Parms, NewHeawlth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRougelike_eventOnHealthChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_InstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHeawlth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x88\x9b\xe5\xbb\xba\xe4\xba\x8b\xe4\xbb\xb6\n//\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0\xe6\x98\xaf\xe5\xa7\x94\xe6\x89\x98\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97,\xe5\x90\x8e\xe9\x9d\xa2\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe8\x87\xaa\xe5\xb7\xb1\xe8\xae\xbe\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe4\xba\x8b\xe4\xbb\xb6\n\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x82\xe6\x95\xb0\xe6\x98\xaf\xe5\xa7\x94\xe6\x89\x98\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97,\xe5\x90\x8e\xe9\x9d\xa2\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe8\x87\xaa\xe5\xb7\xb1\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRougelike, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::_Script_ActionRougelike_eventOnHealthChanged_Parms), Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics
	{
		struct _Script_ActionRougelike_eventOnCreditChanged_Parms
		{
			UAttributeComponent* OwningComp;
			float NewCredit;
			float Delta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCredit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRougelike_eventOnCreditChanged_Parms, OwningComp), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_NewCredit = { "NewCredit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRougelike_eventOnCreditChanged_Parms, NewCredit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRougelike_eventOnCreditChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_NewCredit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRougelike, nullptr, "OnCreditChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::_Script_ActionRougelike_eventOnCreditChanged_Parms), Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAttributeComponent::execApplyHealthChange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_GET_OBJECT(AActor,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyHealthChange(Z_Param_Delta,Z_Param_InstigatorActor,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeComponent::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeComponent::execSetCredit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCredit(Z_Param_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeComponent::execGetAttributes)
	{
		P_GET_OBJECT(AActor,Z_Param_FromActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributeComponent**)Z_Param__Result=UAttributeComponent::GetAttributes(Z_Param_FromActor);
		P_NATIVE_END;
	}
	void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
	{
		UClass* Class = UAttributeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyHealthChange", &UAttributeComponent::execApplyHealthChange },
			{ "GetAttributes", &UAttributeComponent::execGetAttributes },
			{ "IsAlive", &UAttributeComponent::execIsAlive },
			{ "SetCredit", &UAttributeComponent::execSetCredit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics
	{
		struct AttributeComponent_eventApplyHealthChange_Parms
		{
			float Delta;
			AActor* InstigatorActor;
			AActor* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeComponent_eventApplyHealthChange_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeComponent_eventApplyHealthChange_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeComponent_eventApplyHealthChange_Parms, ContextObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeComponent_eventApplyHealthChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeComponent_eventApplyHealthChange_Parms), &Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_InstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "ApplyHealthChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::AttributeComponent_eventApplyHealthChange_Parms), Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics
	{
		struct AttributeComponent_eventGetAttributes_Parms
		{
			AActor* FromActor;
			UAttributeComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::NewProp_FromActor = { "FromActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeComponent_eventGetAttributes_Parms, FromActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeComponent_eventGetAttributes_Parms, ReturnValue), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::NewProp_FromActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "GetAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::AttributeComponent_eventGetAttributes_Parms), Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_GetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_GetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics
	{
		struct AttributeComponent_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "IsAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::AttributeComponent_eventIsAlive_Parms), Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics
	{
		struct AttributeComponent_eventSetCredit_Parms
		{
			float Delta;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeComponent_eventSetCredit_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeComponent_eventSetCredit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeComponent_eventSetCredit_Parms), &Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "SetCredit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::AttributeComponent_eventSetCredit_Parms), Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeComponent_SetCredit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_SetCredit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeComponent);
	UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
	{
		return UAttributeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Credit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Credit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCreditChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreditChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeComponent_ApplyHealthChange, "ApplyHealthChange" }, // 1274185092
		{ &Z_Construct_UFunction_UAttributeComponent_GetAttributes, "GetAttributes" }, // 1565451499
		{ &Z_Construct_UFunction_UAttributeComponent_IsAlive, "IsAlive" }, // 1454365106
		{ &Z_Construct_UFunction_UAttributeComponent_SetCredit, "SetCredit" }, // 3352341065
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AttributeComponent.h" },
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComponent, Health), METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Credit_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Credit = { "Credit", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComponent, Credit), METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Credit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Credit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_HealthMax_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_HealthMax = { "HealthMax", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComponent, HealthMax), METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_HealthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_HealthMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComponent, OnHealthChanged), Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnHealthChanged_MetaData)) }; // 2912229615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnCreditChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnCreditChanged = { "OnCreditChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeComponent, OnCreditChanged), Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnCreditChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnCreditChanged_MetaData)) }; // 2845838624
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Credit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_HealthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnCreditChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
		&UAttributeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeComponent()
	{
		if (!Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UAttributeComponent>()
	{
		return UAttributeComponent::StaticClass();
	}

	void UAttributeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_HealthMax(TEXT("HealthMax"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_HealthMax == ClassReps[(int32)ENetFields_Private::HealthMax].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAttributeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeComponent, UAttributeComponent::StaticClass, TEXT("UAttributeComponent"), &Z_Registration_Info_UClass_UAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeComponent), 1069501175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_4074107868(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AttributeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/AI/AICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacter() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AAICharacter_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AAICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAICharacter::execOnSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePawn(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacter::execOnHealthChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_GET_OBJECT(UAttributeComponent,Z_Param_OwningComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeawlth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_InstigatorActor,Z_Param_OwningComp,Z_Param_NewHeawlth,Z_Param_Delta);
		P_NATIVE_END;
	}
	void AAICharacter::StaticRegisterNativesAAICharacter()
	{
		UClass* Class = AAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChanged", &AAICharacter::execOnHealthChanged },
			{ "OnSeePawn", &AAICharacter::execOnSeePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics
	{
		struct AICharacter_eventOnHealthChanged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacter_eventOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacter_eventOnHealthChanged_Parms, OwningComp), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_OwningComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_NewHeawlth = { "NewHeawlth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacter_eventOnHealthChanged_Parms, NewHeawlth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacter_eventOnHealthChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_InstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_NewHeawlth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacter, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::AICharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAICharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics
	{
		struct AICharacter_eventOnSeePawn_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacter_eventOnSeePawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacter, nullptr, "OnSeePawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::AICharacter_eventOnSeePawn_Parms), Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacter_OnSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAICharacter_OnSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAICharacter);
	UClass* Z_Construct_UClass_AAICharacter_NoRegister()
	{
		return AAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICharacter_OnHealthChanged, "OnHealthChanged" }, // 3435313447
		{ &Z_Construct_UFunction_AAICharacter_OnSeePawn, "OnSeePawn" }, // 191283822
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AICharacter.h" },
		{ "ModuleRelativePath", "Public/AI/AICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_ActionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacter, ActionComp), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_ActionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_ActionComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_PawnSensingComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_AttributeComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_AttributeComp = { "AttributeComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacter, AttributeComp), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_AttributeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_AttributeComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacter, HealthBarWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_HealthBarWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_HealthBarWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_ActionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_PawnSensingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_AttributeComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_HealthBarWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAICharacter_Statics::ClassParams = {
		&AAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacter()
	{
		if (!Z_Registration_Info_UClass_AAICharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAICharacter.OuterSingleton, Z_Construct_UClass_AAICharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAICharacter.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<AAICharacter>()
	{
		return AAICharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacter);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_AICharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_AICharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAICharacter, AAICharacter::StaticClass, TEXT("AAICharacter"), &Z_Registration_Info_UClass_AAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAICharacter), 215916709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_AICharacter_h_3527847185(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_AICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_AICharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

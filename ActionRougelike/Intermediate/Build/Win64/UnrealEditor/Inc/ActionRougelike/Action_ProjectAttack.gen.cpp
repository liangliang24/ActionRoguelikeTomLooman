// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/Action_ProjectAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAction_ProjectAttack() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction_ProjectAttack_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction_ProjectAttack();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAction_ProjectAttack::execAttackDelay_Elasped)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InstigatorCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackDelay_Elasped(Z_Param_InstigatorCharacter);
		P_NATIVE_END;
	}
	void UAction_ProjectAttack::StaticRegisterNativesUAction_ProjectAttack()
	{
		UClass* Class = UAction_ProjectAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackDelay_Elasped", &UAction_ProjectAttack::execAttackDelay_Elasped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics
	{
		struct Action_ProjectAttack_eventAttackDelay_Elasped_Parms
		{
			ACharacter* InstigatorCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_ProjectAttack_eventAttackDelay_Elasped_Parms, InstigatorCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::NewProp_InstigatorCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action_ProjectAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction_ProjectAttack, nullptr, "AttackDelay_Elasped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::Action_ProjectAttack_eventAttackDelay_Elasped_Parms), Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAction_ProjectAttack);
	UClass* Z_Construct_UClass_UAction_ProjectAttack_NoRegister()
	{
		return UAction_ProjectAttack::StaticClass();
	}
	struct Z_Construct_UClass_UAction_ProjectAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAction_ProjectAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAction_ProjectAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAction_ProjectAttack_AttackDelay_Elasped, "AttackDelay_Elasped" }, // 1657614996
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_ProjectAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Action_ProjectAttack.h" },
		{ "ModuleRelativePath", "Public/Action_ProjectAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Action_ProjectAttack.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction_ProjectAttack, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackAnim_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Action_ProjectAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction_ProjectAttack, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackParticle_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Action_ProjectAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackParticle = { "AttackParticle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction_ProjectAttack, AttackParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_HandSocketName_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Action_ProjectAttack.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction_ProjectAttack, HandSocketName), METADATA_PARAMS(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_HandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_HandSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackDelay_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Action_ProjectAttack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackDelay = { "AttackDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction_ProjectAttack, AttackDelay), METADATA_PARAMS(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAction_ProjectAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_HandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_ProjectAttack_Statics::NewProp_AttackDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAction_ProjectAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAction_ProjectAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAction_ProjectAttack_Statics::ClassParams = {
		&UAction_ProjectAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAction_ProjectAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAction_ProjectAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAction_ProjectAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_ProjectAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAction_ProjectAttack()
	{
		if (!Z_Registration_Info_UClass_UAction_ProjectAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAction_ProjectAttack.OuterSingleton, Z_Construct_UClass_UAction_ProjectAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAction_ProjectAttack.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UAction_ProjectAttack>()
	{
		return UAction_ProjectAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAction_ProjectAttack);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_Action_ProjectAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_Action_ProjectAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAction_ProjectAttack, UAction_ProjectAttack::StaticClass, TEXT("UAction_ProjectAttack"), &Z_Registration_Info_UClass_UAction_ProjectAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAction_ProjectAttack), 167783976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_Action_ProjectAttack_h_2607215449(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_Action_ProjectAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_Action_ProjectAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

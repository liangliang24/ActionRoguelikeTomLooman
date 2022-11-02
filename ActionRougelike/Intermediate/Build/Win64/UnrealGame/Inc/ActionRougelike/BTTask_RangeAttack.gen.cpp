// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/AI/BTTask_RangeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RangeAttack() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UBTTask_RangeAttack_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UBTTask_RangeAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UBTTask_RangeAttack::StaticRegisterNativesUBTTask_RangeAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RangeAttack);
	UClass* Z_Construct_UClass_UBTTask_RangeAttack_NoRegister()
	{
		return UBTTask_RangeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RangeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackedActor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RangeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RangeAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_RangeAttack.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_RangeAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_AttackedActor_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AI/BTTask_RangeAttack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_AttackedActor = { "AttackedActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RangeAttack, AttackedActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_AttackedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_AttackedActor_MetaData)) }; // 454597379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/AI/BTTask_RangeAttack.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RangeAttack, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RangeAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_AttackedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RangeAttack_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RangeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RangeAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RangeAttack_Statics::ClassParams = {
		&UBTTask_RangeAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RangeAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangeAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RangeAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RangeAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RangeAttack()
	{
		if (!Z_Registration_Info_UClass_UBTTask_RangeAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RangeAttack.OuterSingleton, Z_Construct_UClass_UBTTask_RangeAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_RangeAttack.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UBTTask_RangeAttack>()
	{
		return UBTTask_RangeAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RangeAttack);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTTask_RangeAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTTask_RangeAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RangeAttack, UBTTask_RangeAttack::StaticClass, TEXT("UBTTask_RangeAttack"), &Z_Registration_Info_UClass_UBTTask_RangeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RangeAttack), 534197067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTTask_RangeAttack_h_3520189737(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTTask_RangeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTTask_RangeAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

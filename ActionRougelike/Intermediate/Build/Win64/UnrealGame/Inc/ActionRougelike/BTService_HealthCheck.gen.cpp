// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/AI/BTService_HealthCheck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_HealthCheck() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UBTService_HealthCheck_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UBTService_HealthCheck();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_HealthCheck::StaticRegisterNativesUBTService_HealthCheck()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_HealthCheck);
	UClass* Z_Construct_UClass_UBTService_HealthCheck_NoRegister()
	{
		return UBTService_HealthCheck::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_HealthCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowHealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGoHeal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bGoHeal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_HealthCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_HealthCheck_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTService_HealthCheck.h" },
		{ "ModuleRelativePath", "Public/AI/BTService_HealthCheck.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_HealthName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/BTService_HealthCheck.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_HealthName = { "HealthName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_HealthCheck, HealthName), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_HealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_HealthName_MetaData)) }; // 454597379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_LowHealthName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/BTService_HealthCheck.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_LowHealthName = { "LowHealthName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_HealthCheck, LowHealthName), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_LowHealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_LowHealthName_MetaData)) }; // 454597379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_bGoHeal_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/BTService_HealthCheck.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_bGoHeal = { "bGoHeal", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_HealthCheck, bGoHeal), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_bGoHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_bGoHeal_MetaData)) }; // 454597379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_HealthCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_HealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_LowHealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_HealthCheck_Statics::NewProp_bGoHeal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_HealthCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_HealthCheck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_HealthCheck_Statics::ClassParams = {
		&UBTService_HealthCheck::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_HealthCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_HealthCheck_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_HealthCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_HealthCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_HealthCheck()
	{
		if (!Z_Registration_Info_UClass_UBTService_HealthCheck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_HealthCheck.OuterSingleton, Z_Construct_UClass_UBTService_HealthCheck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_HealthCheck.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UBTService_HealthCheck>()
	{
		return UBTService_HealthCheck::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_HealthCheck);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTService_HealthCheck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTService_HealthCheck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_HealthCheck, UBTService_HealthCheck::StaticClass, TEXT("UBTService_HealthCheck"), &Z_Registration_Info_UClass_UBTService_HealthCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_HealthCheck), 246644816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTService_HealthCheck_h_4227442950(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTService_HealthCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_AI_BTService_HealthCheck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

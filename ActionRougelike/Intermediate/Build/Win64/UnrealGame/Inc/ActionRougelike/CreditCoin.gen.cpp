// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/CreditCoin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreditCoin() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_ACreditCoin_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_ACreditCoin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UGameplayInterface_NoRegister();
// End Cross Module References
	void ACreditCoin::StaticRegisterNativesACreditCoin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACreditCoin);
	UClass* Z_Construct_UClass_ACreditCoin_NoRegister()
	{
		return ACreditCoin::StaticClass();
	}
	struct Z_Construct_UClass_ACreditCoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreditCoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreditCoin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreditCoin.h" },
		{ "ModuleRelativePath", "Public/CreditCoin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreditCoin_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "CreditCoin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CreditCoin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreditCoin_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreditCoin, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreditCoin_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreditCoin_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreditCoin_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "CreditCoin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CreditCoin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreditCoin_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreditCoin, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreditCoin_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreditCoin_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreditCoin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreditCoin_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreditCoin_Statics::NewProp_MeshComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACreditCoin_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayInterface_NoRegister, (int32)VTABLE_OFFSET(ACreditCoin, IGameplayInterface), false },  // 427883311
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreditCoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreditCoin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreditCoin_Statics::ClassParams = {
		&ACreditCoin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACreditCoin_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACreditCoin_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreditCoin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreditCoin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreditCoin()
	{
		if (!Z_Registration_Info_UClass_ACreditCoin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACreditCoin.OuterSingleton, Z_Construct_UClass_ACreditCoin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACreditCoin.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<ACreditCoin>()
	{
		return ACreditCoin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreditCoin);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_CreditCoin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_CreditCoin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACreditCoin, ACreditCoin::StaticClass, TEXT("ACreditCoin"), &Z_Registration_Info_UClass_ACreditCoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreditCoin), 1838842444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_CreditCoin_h_3364927510(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_CreditCoin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_CreditCoin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

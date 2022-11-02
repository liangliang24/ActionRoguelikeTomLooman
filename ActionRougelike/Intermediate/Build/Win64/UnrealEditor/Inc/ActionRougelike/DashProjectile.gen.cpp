// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/DashProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashProjectile() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_ADashProjectile_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_ADashProjectile();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AProjectileBase();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
// End Cross Module References
	void ADashProjectile::StaticRegisterNativesADashProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADashProjectile);
	UClass* Z_Construct_UClass_ADashProjectile_NoRegister()
	{
		return ADashProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ADashProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetonateDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetonateDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADashProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADashProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DashProjectile.h" },
		{ "ModuleRelativePath", "Public/DashProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADashProjectile_Statics::NewProp_TeleportDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Public/DashProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADashProjectile_Statics::NewProp_TeleportDelay = { "TeleportDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADashProjectile, TeleportDelay), METADATA_PARAMS(Z_Construct_UClass_ADashProjectile_Statics::NewProp_TeleportDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADashProjectile_Statics::NewProp_TeleportDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADashProjectile_Statics::NewProp_DetonateDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Public/DashProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADashProjectile_Statics::NewProp_DetonateDelay = { "DetonateDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADashProjectile, DetonateDelay), METADATA_PARAMS(Z_Construct_UClass_ADashProjectile_Statics::NewProp_DetonateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADashProjectile_Statics::NewProp_DetonateDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADashProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADashProjectile_Statics::NewProp_TeleportDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADashProjectile_Statics::NewProp_DetonateDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADashProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADashProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADashProjectile_Statics::ClassParams = {
		&ADashProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADashProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADashProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADashProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADashProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADashProjectile()
	{
		if (!Z_Registration_Info_UClass_ADashProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADashProjectile.OuterSingleton, Z_Construct_UClass_ADashProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADashProjectile.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<ADashProjectile>()
	{
		return ADashProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADashProjectile);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_DashProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_DashProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADashProjectile, ADashProjectile::StaticClass, TEXT("ADashProjectile"), &Z_Registration_Info_UClass_ADashProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADashProjectile), 768086207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_DashProjectile_h_3617727477(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_DashProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_DashProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

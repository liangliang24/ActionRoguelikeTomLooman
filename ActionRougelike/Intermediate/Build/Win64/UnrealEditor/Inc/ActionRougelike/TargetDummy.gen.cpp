// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/TargetDummy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetDummy() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_ATargetDummy_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_ATargetDummy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATargetDummy::execOnHealchChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_GET_OBJECT(UAttributeComponent,Z_Param_OwningComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeawlth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealchChanged(Z_Param_InstigatorActor,Z_Param_OwningComp,Z_Param_NewHeawlth,Z_Param_Delta);
		P_NATIVE_END;
	}
	void ATargetDummy::StaticRegisterNativesATargetDummy()
	{
		UClass* Class = ATargetDummy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealchChanged", &ATargetDummy::execOnHealchChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics
	{
		struct TargetDummy_eventOnHealchChanged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetDummy_eventOnHealchChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetDummy_eventOnHealchChanged_Parms, OwningComp), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_OwningComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_NewHeawlth = { "NewHeawlth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetDummy_eventOnHealchChanged_Parms, NewHeawlth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetDummy_eventOnHealchChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_InstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_NewHeawlth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetDummy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetDummy, nullptr, "OnHealchChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::TargetDummy_eventOnHealchChanged_Parms), Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetDummy_OnHealchChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetDummy_OnHealchChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetDummy);
	UClass* Z_Construct_UClass_ATargetDummy_NoRegister()
	{
		return ATargetDummy::StaticClass();
	}
	struct Z_Construct_UClass_ATargetDummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetDummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATargetDummy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetDummy_OnHealchChanged, "OnHealchChanged" }, // 1603334069
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetDummy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetDummy.h" },
		{ "ModuleRelativePath", "Public/TargetDummy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetDummy_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "TargetDummy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetDummy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetDummy_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetDummy, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetDummy_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetDummy_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetDummy_Statics::NewProp_AttributeComp_MetaData[] = {
		{ "Category", "TargetDummy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetDummy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetDummy_Statics::NewProp_AttributeComp = { "AttributeComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetDummy, AttributeComp), Z_Construct_UClass_UAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetDummy_Statics::NewProp_AttributeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetDummy_Statics::NewProp_AttributeComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetDummy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetDummy_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetDummy_Statics::NewProp_AttributeComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetDummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetDummy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetDummy_Statics::ClassParams = {
		&ATargetDummy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATargetDummy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetDummy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetDummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetDummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetDummy()
	{
		if (!Z_Registration_Info_UClass_ATargetDummy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetDummy.OuterSingleton, Z_Construct_UClass_ATargetDummy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATargetDummy.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<ATargetDummy>()
	{
		return ATargetDummy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetDummy);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_TargetDummy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_TargetDummy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATargetDummy, ATargetDummy::StaticClass, TEXT("ATargetDummy"), &Z_Registration_Info_UClass_ATargetDummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetDummy), 3694934862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_TargetDummy_h_3490269501(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_TargetDummy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_TargetDummy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

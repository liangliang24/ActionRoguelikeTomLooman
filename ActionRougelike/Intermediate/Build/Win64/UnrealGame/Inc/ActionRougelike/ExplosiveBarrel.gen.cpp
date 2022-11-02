// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/ExplosiveBarrel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveBarrel() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AExplosiveBarrel_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AExplosiveBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AExplosiveBarrel::execOnActorHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AExplosiveBarrel::StaticRegisterNativesAExplosiveBarrel()
	{
		UClass* Class = AExplosiveBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorHit", &AExplosiveBarrel::execOnActorHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics
	{
		struct ExplosiveBarrel_eventOnActorHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBarrel_eventOnActorHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBarrel_eventOnActorHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBarrel_eventOnActorHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBarrel_eventOnActorHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosiveBarrel_eventOnActorHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosiveBarrel, nullptr, "OnActorHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::ExplosiveBarrel_eventOnActorHit_Parms), Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosiveBarrel_OnActorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosiveBarrel_OnActorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExplosiveBarrel);
	UClass* Z_Construct_UClass_AExplosiveBarrel_NoRegister()
	{
		return AExplosiveBarrel::StaticClass();
	}
	struct Z_Construct_UClass_AExplosiveBarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialForceComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialForceComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosiveBarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExplosiveBarrel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExplosiveBarrel_OnActorHit, "OnActorHit" }, // 1586947144
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBarrel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveBarrel.h" },
		{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "ExplosiveBarrel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBarrel, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_StaticMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData[] = {
		{ "Category", "ExplosiveBarrel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_RadialForceComp = { "RadialForceComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveBarrel, RadialForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveBarrel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_StaticMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBarrel_Statics::NewProp_RadialForceComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosiveBarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveBarrel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveBarrel_Statics::ClassParams = {
		&AExplosiveBarrel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExplosiveBarrel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBarrel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosiveBarrel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosiveBarrel()
	{
		if (!Z_Registration_Info_UClass_AExplosiveBarrel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosiveBarrel.OuterSingleton, Z_Construct_UClass_AExplosiveBarrel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExplosiveBarrel.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<AExplosiveBarrel>()
	{
		return AExplosiveBarrel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveBarrel);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ExplosiveBarrel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ExplosiveBarrel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExplosiveBarrel, AExplosiveBarrel::StaticClass, TEXT("AExplosiveBarrel"), &Z_Registration_Info_UClass_AExplosiveBarrel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveBarrel), 709984427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ExplosiveBarrel_h_328491786(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ExplosiveBarrel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ExplosiveBarrel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

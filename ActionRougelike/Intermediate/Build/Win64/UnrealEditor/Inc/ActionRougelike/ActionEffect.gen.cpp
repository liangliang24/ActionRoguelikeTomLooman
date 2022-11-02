// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/ActionEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionEffect() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UActionEffect_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UActionEffect();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActionEffect::execExecutePeriodcEffect)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecutePeriodcEffect_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	static FName NAME_UActionEffect_ExecutePeriodcEffect = FName(TEXT("ExecutePeriodcEffect"));
	void UActionEffect::ExecutePeriodcEffect(AActor* Instigator)
	{
		ActionEffect_eventExecutePeriodcEffect_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UActionEffect_ExecutePeriodcEffect),&Parms);
	}
	void UActionEffect::StaticRegisterNativesUActionEffect()
	{
		UClass* Class = UActionEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecutePeriodcEffect", &UActionEffect::execExecutePeriodcEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionEffect_eventExecutePeriodcEffect_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ActionEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionEffect, nullptr, "ExecutePeriodcEffect", nullptr, nullptr, sizeof(ActionEffect_eventExecutePeriodcEffect_Parms), Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionEffect);
	UClass* Z_Construct_UClass_UActionEffect_NoRegister()
	{
		return UActionEffect::StaticClass();
	}
	struct Z_Construct_UClass_UActionEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionEffect_ExecutePeriodcEffect, "ExecutePeriodcEffect" }, // 1719781356
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActionEffect.h" },
		{ "ModuleRelativePath", "Public/ActionEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ActionEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UActionEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionEffect_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionEffect_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ActionEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionEffect_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionEffect, Period), METADATA_PARAMS(Z_Construct_UClass_UActionEffect_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionEffect_Statics::NewProp_Period_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionEffect_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionEffect_Statics::NewProp_Period,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionEffect_Statics::ClassParams = {
		&UActionEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionEffect()
	{
		if (!Z_Registration_Info_UClass_UActionEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionEffect.OuterSingleton, Z_Construct_UClass_UActionEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionEffect.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UActionEffect>()
	{
		return UActionEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionEffect);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionEffect, UActionEffect::StaticClass, TEXT("UActionEffect"), &Z_Registration_Info_UClass_UActionEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionEffect), 1996624094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_211437691(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

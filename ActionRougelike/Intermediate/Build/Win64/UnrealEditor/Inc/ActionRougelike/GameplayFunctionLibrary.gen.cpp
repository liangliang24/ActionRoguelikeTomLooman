// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/GameplayFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayFunctionLibrary() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UGameplayFunctionLibrary_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UGameplayFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayFunctionLibrary::execApplyDirectionalDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayFunctionLibrary::ApplyDirectionalDamage(Z_Param_TargetActor,Z_Param_DamageCauser,Z_Param_DamageAmount,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayFunctionLibrary::execApplyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayFunctionLibrary::ApplyDamage(Z_Param_TargetActor,Z_Param_DamageCauser,Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	void UGameplayFunctionLibrary::StaticRegisterNativesUGameplayFunctionLibrary()
	{
		UClass* Class = UGameplayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &UGameplayFunctionLibrary::execApplyDamage },
			{ "ApplyDirectionalDamage", &UGameplayFunctionLibrary::execApplyDirectionalDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics
	{
		struct GameplayFunctionLibrary_eventApplyDamage_Parms
		{
			AActor* TargetActor;
			AActor* DamageCauser;
			float DamageAmount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayFunctionLibrary_eventApplyDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayFunctionLibrary_eventApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayFunctionLibrary_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayFunctionLibrary_eventApplyDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayFunctionLibrary_eventApplyDamage_Parms), &Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/GameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFunctionLibrary, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::GameplayFunctionLibrary_eventApplyDamage_Parms), Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics
	{
		struct GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms
		{
			AActor* TargetActor;
			AActor* DamageCauser;
			float DamageAmount;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult_MetaData)) }; // 1416937132
	void Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms), &Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/GameplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFunctionLibrary, nullptr, "ApplyDirectionalDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::GameplayFunctionLibrary_eventApplyDirectionalDamage_Parms), Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayFunctionLibrary);
	UClass* Z_Construct_UClass_UGameplayFunctionLibrary_NoRegister()
	{
		return UGameplayFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDamage, "ApplyDamage" }, // 1856831780
		{ &Z_Construct_UFunction_UGameplayFunctionLibrary_ApplyDirectionalDamage, "ApplyDirectionalDamage" }, // 3046716170
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GameplayFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayFunctionLibrary_Statics::ClassParams = {
		&UGameplayFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGameplayFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGameplayFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayFunctionLibrary.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UGameplayFunctionLibrary>()
	{
		return UGameplayFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayFunctionLibrary, UGameplayFunctionLibrary::StaticClass, TEXT("UGameplayFunctionLibrary"), &Z_Registration_Info_UClass_UGameplayFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayFunctionLibrary), 3761071462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_2714893120(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

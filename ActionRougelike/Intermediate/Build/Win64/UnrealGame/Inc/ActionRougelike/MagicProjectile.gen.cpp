// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/MagicProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicProjectile() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AMagicProjectile_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AMagicProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMagicProjectile::execOnActorOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AMagicProjectile::StaticRegisterNativesAMagicProjectile()
	{
		UClass* Class = AMagicProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorOverlap", &AMagicProjectile::execOnActorOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics
	{
		struct MagicProjectile_eventOnActorOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MagicProjectile_eventOnActorOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicProjectile_eventOnActorOverlap_Parms), &Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicProjectile, nullptr, "OnActorOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::MagicProjectile_eventOnActorOverlap_Parms), Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicProjectile_OnActorOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicProjectile_OnActorOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicProjectile);
	UClass* Z_Construct_UClass_AMagicProjectile_NoRegister()
	{
		return AMagicProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AMagicProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurningEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BurningEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Shake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParryTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParryTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactVFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicProjectile_OnActorOverlap, "OnActorOverlap" }, // 1042047894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicProjectile.h" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_BurningEffect_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_BurningEffect = { "BurningEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, BurningEffect), Z_Construct_UClass_UAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_BurningEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_BurningEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SoundBase_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SoundBase = { "SoundBase", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, SoundBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SoundBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SoundBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Shake_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, Shake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Shake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Shake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, Damage), METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ParryTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ParryTag = { "ParryTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, ParryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ParryTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ParryTag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX = { "ImpactVFX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, ImpactVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "Comment", "//\xe4\xbd\x9c\xe4\xb8\xba\xe6\x9c\x80\xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
		{ "ToolTip", "\xe4\xbd\x9c\xe4\xb8\xba\xe6\x9c\x80\xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "Comment", "//\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbb\x84\xe4\xbb\xb6\xe7\xbb\x99\xe4\xba\x88\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x80\xe4\xb8\xaa\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe8\xbf\x9b\xe5\x85\xa5\xe7\x9b\xb4\xe7\xba\xbf\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
		{ "ToolTip", "\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbb\x84\xe4\xbb\xb6\xe7\xbb\x99\xe4\xba\x88\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x80\xe4\xb8\xaa\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe8\xbf\x9b\xe5\x85\xa5\xe7\x9b\xb4\xe7\xba\xbf" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "Comment", "//\xe7\xb2\x92\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe5\xb1\x95\xe7\xa4\xba\xe5\xad\x90\xe5\xbc\xb9\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicProjectile.h" },
		{ "ToolTip", "\xe7\xb2\x92\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe5\xb1\x95\xe7\xa4\xba\xe5\xad\x90\xe5\xbc\xb9" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp = { "EffectComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, EffectComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_BurningEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SoundBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Shake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ParryTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_EffectComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicProjectile_Statics::ClassParams = {
		&AMagicProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicProjectile()
	{
		if (!Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton, Z_Construct_UClass_AMagicProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<AMagicProjectile>()
	{
		return AMagicProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicProjectile);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MagicProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MagicProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagicProjectile, AMagicProjectile::StaticClass, TEXT("AMagicProjectile"), &Z_Registration_Info_UClass_AMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicProjectile), 1912797008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MagicProjectile_h_555123639(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MagicProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

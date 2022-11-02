// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/MyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}
// Cross Module References
	ACTIONROUGELIKE_API UScriptStruct* Z_Construct_UScriptStruct_FMonsterInFoRow();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AMyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMonsterInFoRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMonsterInFoRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MonsterInFoRow;
class UScriptStruct* FMonsterInFoRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterInFoRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MonsterInFoRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMonsterInFoRow, Z_Construct_UPackage__Script_ActionRougelike(), TEXT("MonsterInFoRow"));
	}
	return Z_Registration_Info_UScriptStruct_MonsterInFoRow.OuterSingleton;
}
template<> ACTIONROUGELIKE_API UScriptStruct* StaticStruct<FMonsterInFoRow>()
{
	return FMonsterInFoRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMonsterInFoRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonsterId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MonsterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillReward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KillReward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMonsterInFoRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_MonsterId_MetaData[] = {
		{ "Category", "MonsterInFoRow" },
		{ "Comment", "//\xe8\xa6\x81\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84""AI\n" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ToolTip", "\xe8\xa6\x81\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84""AI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_MonsterId = { "MonsterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMonsterInFoRow, MonsterId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_MonsterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_MonsterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "MonsterInFoRow" },
		{ "Comment", "//\xe9\x80\x89\xe4\xb8\xad\xe8\xbf\x99\xe4\xb8\xaa""AI\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ToolTip", "\xe9\x80\x89\xe4\xb8\xad\xe8\xbf\x99\xe4\xb8\xaa""AI\xe7\x9a\x84\xe6\xa6\x82\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMonsterInFoRow, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_SpawnCost_MetaData[] = {
		{ "Category", "MonsterInFoRow" },
		{ "Comment", "//\xe7\x94\x9f\xe6\x88\x90\xe8\xbf\x99\xe4\xb8\xaa""AI\xe6\x89\x80\xe9\x9c\x80\xe8\xa6\x81\xe8\x8a\xb1\xe8\xb4\xb9\xe7\x9a\x84\n" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe8\xbf\x99\xe4\xb8\xaa""AI\xe6\x89\x80\xe9\x9c\x80\xe8\xa6\x81\xe8\x8a\xb1\xe8\xb4\xb9\xe7\x9a\x84" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_SpawnCost = { "SpawnCost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMonsterInFoRow, SpawnCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_SpawnCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_SpawnCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_KillReward_MetaData[] = {
		{ "Category", "MonsterInFoRow" },
		{ "Comment", "//\xe5\x87\xbb\xe6\x9d\x80\xe8\xbf\x99\xe4\xb8\xaa""AI\xe5\xa5\x96\xe5\x8a\xb1\xe7\x9a\x84\xe5\x88\x86\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ToolTip", "\xe5\x87\xbb\xe6\x9d\x80\xe8\xbf\x99\xe4\xb8\xaa""AI\xe5\xa5\x96\xe5\x8a\xb1\xe7\x9a\x84\xe5\x88\x86\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_KillReward = { "KillReward", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMonsterInFoRow, KillReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_KillReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_KillReward_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_MonsterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_SpawnCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewProp_KillReward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MonsterInFoRow",
		sizeof(FMonsterInFoRow),
		alignof(FMonsterInFoRow),
		Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMonsterInFoRow()
	{
		if (!Z_Registration_Info_UScriptStruct_MonsterInFoRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MonsterInFoRow.InnerSingleton, Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MonsterInFoRow.InnerSingleton;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execLoadSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execWriteSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execKillAllAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillAllAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execOnActorKill)
	{
		P_GET_OBJECT(AActor,Z_Param_VictimActor);
		P_GET_OBJECT(AActor,Z_Param_Killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorKill(Z_Param_VictimActor,Z_Param_Killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execDestroyActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Died);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyActor(Z_Param_Died);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execRespawnPlayerElasped)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RespawnPlayerElasped(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execSpawnCoinTimerElasped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCoinTimerElasped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execSpawnCoin)
	{
		P_GET_OBJECT(UEnvQueryInstanceBlueprintWrapper,Z_Param_QueryInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_QueryStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCoin(Z_Param_QueryInstance,EEnvQueryStatus::Type(Z_Param_QueryStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execSpawnBotTimerElasped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBotTimerElasped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execSpawnBot)
	{
		P_GET_OBJECT(UEnvQueryInstanceBlueprintWrapper,Z_Param_QueryInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_QueryStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBot(Z_Param_QueryInstance,EEnvQueryStatus::Type(Z_Param_QueryStatus));
		P_NATIVE_END;
	}
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
		UClass* Class = AMyGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyActor", &AMyGameModeBase::execDestroyActor },
			{ "KillAllAI", &AMyGameModeBase::execKillAllAI },
			{ "LoadSaveGame", &AMyGameModeBase::execLoadSaveGame },
			{ "OnActorKill", &AMyGameModeBase::execOnActorKill },
			{ "RespawnPlayerElasped", &AMyGameModeBase::execRespawnPlayerElasped },
			{ "SpawnBot", &AMyGameModeBase::execSpawnBot },
			{ "SpawnBotTimerElasped", &AMyGameModeBase::execSpawnBotTimerElasped },
			{ "SpawnCoin", &AMyGameModeBase::execSpawnCoin },
			{ "SpawnCoinTimerElasped", &AMyGameModeBase::execSpawnCoinTimerElasped },
			{ "WriteSaveGame", &AMyGameModeBase::execWriteSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics
	{
		struct MyGameModeBase_eventDestroyActor_Parms
		{
			AActor* Died;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Died;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::NewProp_Died = { "Died", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventDestroyActor_Parms, Died), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::NewProp_Died,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "DestroyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::MyGameModeBase_eventDestroyActor_Parms), Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_DestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_DestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_KillAllAI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_KillAllAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_KillAllAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "KillAllAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_KillAllAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_KillAllAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_KillAllAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_KillAllAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "LoadSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics
	{
		struct MyGameModeBase_eventOnActorKill_Parms
		{
			AActor* VictimActor;
			AActor* Killer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VictimActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::NewProp_VictimActor = { "VictimActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventOnActorKill_Parms, VictimActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventOnActorKill_Parms, Killer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::NewProp_VictimActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::NewProp_Killer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "OnActorKill", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::MyGameModeBase_eventOnActorKill_Parms), Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_OnActorKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_OnActorKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics
	{
		struct MyGameModeBase_eventRespawnPlayerElasped_Parms
		{
			AController* Controller;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventRespawnPlayerElasped_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "RespawnPlayerElasped", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::MyGameModeBase_eventRespawnPlayerElasped_Parms), Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics
	{
		struct MyGameModeBase_eventSpawnBot_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::NewProp_QueryInstance = { "QueryInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventSpawnBot_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventSpawnBot_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) }; // 3316766208
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::NewProp_QueryInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::NewProp_QueryStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "SpawnBot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::MyGameModeBase_eventSpawnBot_Parms), Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_SpawnBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_SpawnBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "SpawnBotTimerElasped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics
	{
		struct MyGameModeBase_eventSpawnCoin_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::NewProp_QueryInstance = { "QueryInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventSpawnCoin_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameModeBase_eventSpawnCoin_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) }; // 3316766208
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::NewProp_QueryInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::NewProp_QueryStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "SpawnCoin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::MyGameModeBase_eventSpawnCoin_Parms), Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_SpawnCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_SpawnCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "SpawnCoinTimerElasped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "WriteSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBase);
	UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
	{
		return AMyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonsterTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MonsterTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTimerInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTimerInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBotQueryTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnBotQueryTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoinClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CoinClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoinQueryTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnCoinQueryTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DifficultyCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameModeBase_DestroyActor, "DestroyActor" }, // 3698777022
		{ &Z_Construct_UFunction_AMyGameModeBase_KillAllAI, "KillAllAI" }, // 3736838762
		{ &Z_Construct_UFunction_AMyGameModeBase_LoadSaveGame, "LoadSaveGame" }, // 4045785067
		{ &Z_Construct_UFunction_AMyGameModeBase_OnActorKill, "OnActorKill" }, // 435912664
		{ &Z_Construct_UFunction_AMyGameModeBase_RespawnPlayerElasped, "RespawnPlayerElasped" }, // 3330251863
		{ &Z_Construct_UFunction_AMyGameModeBase_SpawnBot, "SpawnBot" }, // 4273586872
		{ &Z_Construct_UFunction_AMyGameModeBase_SpawnBotTimerElasped, "SpawnBotTimerElasped" }, // 1084134059
		{ &Z_Construct_UFunction_AMyGameModeBase_SpawnCoin, "SpawnCoin" }, // 3307231435
		{ &Z_Construct_UFunction_AMyGameModeBase_SpawnCoinTimerElasped, "SpawnCoinTimerElasped" }, // 1556661490
		{ &Z_Construct_UFunction_AMyGameModeBase_WriteSaveGame, "WriteSaveGame" }, // 332777623
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameModeBase.h" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CurrentSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CurrentSaveGame = { "CurrentSaveGame", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, CurrentSaveGame), Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CurrentSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CurrentSaveGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterTable_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterTable = { "MonsterTable", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, MonsterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnTimerInterval = { "SpawnTimerInterval", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, SpawnTimerInterval), METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnBotQueryTemplate_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnBotQueryTemplate = { "SpawnBotQueryTemplate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, SpawnBotQueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnBotQueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnBotQueryTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CoinClass_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/*UPROPERTY(EditDefaultsOnly,Category=\"AI\")\n\x09TSubclassOf<AAICharacter> MinionClass;*/" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly,Category=\"AI\")\n       TSubclassOf<AAICharacter> MinionClass;" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CoinClass = { "CoinClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, CoinClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CoinClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CoinClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnCoinQueryTemplate_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnCoinQueryTemplate = { "SpawnCoinQueryTemplate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, SpawnCoinQueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnCoinQueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnCoinQueryTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DifficultyCurve_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DifficultyCurve = { "DifficultyCurve", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, DifficultyCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DifficultyCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DifficultyCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CurrentSaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnTimerInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnBotQueryTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CoinClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnCoinQueryTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DifficultyCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
		&AMyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<AMyGameModeBase>()
	{
		return AMyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_Statics::ScriptStructInfo[] = {
		{ FMonsterInFoRow::StaticStruct, Z_Construct_UScriptStruct_FMonsterInFoRow_Statics::NewStructOps, TEXT("MonsterInFoRow"), &Z_Registration_Info_UScriptStruct_MonsterInFoRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMonsterInFoRow), 758128470U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBase, AMyGameModeBase::StaticClass, TEXT("AMyGameModeBase"), &Z_Registration_Info_UClass_AMyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBase), 484462621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_3641377771(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyGameModeBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

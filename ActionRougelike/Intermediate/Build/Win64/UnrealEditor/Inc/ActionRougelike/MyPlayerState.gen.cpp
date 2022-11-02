// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/MyPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerState() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AMyPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayerState::execLoadPlayerState)
	{
		P_GET_OBJECT(UMySaveGame,Z_Param_MySaveGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPlayerState_Implementation(Z_Param_MySaveGame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerState::execSavePlayerState)
	{
		P_GET_OBJECT(UMySaveGame,Z_Param_MySaveGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePlayerState_Implementation(Z_Param_MySaveGame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerState::execGetCredits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCredits();
		P_NATIVE_END;
	}
	static FName NAME_AMyPlayerState_LoadPlayerState = FName(TEXT("LoadPlayerState"));
	void AMyPlayerState::LoadPlayerState(UMySaveGame* MySaveGame)
	{
		MyPlayerState_eventLoadPlayerState_Parms Parms;
		Parms.MySaveGame=MySaveGame;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayerState_LoadPlayerState),&Parms);
	}
	static FName NAME_AMyPlayerState_SavePlayerState = FName(TEXT("SavePlayerState"));
	void AMyPlayerState::SavePlayerState(UMySaveGame* MySaveGame)
	{
		MyPlayerState_eventSavePlayerState_Parms Parms;
		Parms.MySaveGame=MySaveGame;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayerState_SavePlayerState),&Parms);
	}
	void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
	{
		UClass* Class = AMyPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCredits", &AMyPlayerState::execGetCredits },
			{ "LoadPlayerState", &AMyPlayerState::execLoadPlayerState },
			{ "SavePlayerState", &AMyPlayerState::execSavePlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics
	{
		struct MyPlayerState_eventGetCredits_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerState_eventGetCredits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerState, nullptr, "GetCredits", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::MyPlayerState_eventGetCredits_Parms), Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerState_GetCredits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerState_GetCredits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MySaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::NewProp_MySaveGame = { "MySaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerState_eventLoadPlayerState_Parms, MySaveGame), Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::NewProp_MySaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerState, nullptr, "LoadPlayerState", nullptr, nullptr, sizeof(MyPlayerState_eventLoadPlayerState_Parms), Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerState_LoadPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerState_LoadPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MySaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::NewProp_MySaveGame = { "MySaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerState_eventSavePlayerState_Parms, MySaveGame), Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::NewProp_MySaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerState, nullptr, "SavePlayerState", nullptr, nullptr, sizeof(MyPlayerState_eventSavePlayerState_Parms), Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerState_SavePlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerState_SavePlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerState);
	UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
	{
		return AMyPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Credits_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Credits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerState_GetCredits, "GetCredits" }, // 1066441481
		{ &Z_Construct_UFunction_AMyPlayerState_LoadPlayerState, "LoadPlayerState" }, // 2746081395
		{ &Z_Construct_UFunction_AMyPlayerState_SavePlayerState, "SavePlayerState" }, // 153491155
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyPlayerState.h" },
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Credits_MetaData[] = {
		{ "Category", "MyPlayerState" },
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Credits = { "Credits", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerState, Credits), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Credits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Credits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerState, Health), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Health_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Credits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerState_Statics::ClassParams = {
		&AMyPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton, Z_Construct_UClass_AMyPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<AMyPlayerState>()
	{
		return AMyPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerState, AMyPlayerState::StaticClass, TEXT("AMyPlayerState"), &Z_Registration_Info_UClass_AMyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerState), 2222784951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_2775778589(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MyPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

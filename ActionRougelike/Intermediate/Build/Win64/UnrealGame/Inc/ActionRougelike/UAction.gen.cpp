// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/UAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAction() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UAction::execStopAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execStartAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execCanStart)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStart_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execGetOwningComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
		P_NATIVE_END;
	}
	static FName NAME_UAction_CanStart = FName(TEXT("CanStart"));
	bool UAction::CanStart(AActor* Instigator)
	{
		Action_eventCanStart_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UAction_CanStart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAction_StartAction = FName(TEXT("StartAction"));
	void UAction::StartAction(AActor* Instigator)
	{
		Action_eventStartAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UAction_StartAction),&Parms);
	}
	static FName NAME_UAction_StopAction = FName(TEXT("StopAction"));
	void UAction::StopAction(AActor* Instigator)
	{
		Action_eventStopAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UAction_StopAction),&Parms);
	}
	void UAction::StaticRegisterNativesUAction()
	{
		UClass* Class = UAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStart", &UAction::execCanStart },
			{ "GetOwningComponent", &UAction::execGetOwningComponent },
			{ "StartAction", &UAction::execStartAction },
			{ "StopAction", &UAction::execStopAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAction_CanStart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_CanStart_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventCanStart_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAction_CanStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Action_eventCanStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAction_CanStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Action_eventCanStart_Parms), &Z_Construct_UFunction_UAction_CanStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_CanStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_CanStart_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_CanStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_CanStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/UAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_CanStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "CanStart", nullptr, nullptr, sizeof(Action_eventCanStart_Parms), Z_Construct_UFunction_UAction_CanStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_CanStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_CanStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_CanStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_CanStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAction_CanStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetOwningComponent_Statics
	{
		struct Action_eventGetOwningComponent_Parms
		{
			UActionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetOwningComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetOwningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/UAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetOwningComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAction_GetOwningComponent_Statics::Action_eventGetOwningComponent_Parms), Z_Construct_UFunction_UAction_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAction_GetOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_StartAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_StartAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventStartAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_StartAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_StartAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_StartAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/UAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "StartAction", nullptr, nullptr, sizeof(Action_eventStartAction_Parms), Z_Construct_UFunction_UAction_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_StartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_StartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_StartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_StartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAction_StartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_StopAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_StopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_StopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_StopAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_StopAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/UAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_StopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "StopAction", nullptr, nullptr, sizeof(Action_eventStopAction_Parms), Z_Construct_UFunction_UAction_StopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_StopAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_StopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_StopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_StopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAction_StopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAction);
	UClass* Z_Construct_UClass_UAction_NoRegister()
	{
		return UAction::StaticClass();
	}
	struct Z_Construct_UClass_UAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAction_CanStart, "CanStart" }, // 879715100
		{ &Z_Construct_UFunction_UAction_GetOwningComponent, "GetOwningComponent" }, // 2209683771
		{ &Z_Construct_UFunction_UAction_StartAction, "StartAction" }, // 1408820202
		{ &Z_Construct_UFunction_UAction_StopAction, "StopAction" }, // 3517684450
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * \n *///\xe8\xae\xa9\xe5\xae\x83\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\x9c\xe4\xb8\xba\xe4\xb8\x80\xe4\xb8\xaa\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\n" },
		{ "IncludePath", "UAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UAction.h" },
		{ "ToolTip", "//\xe8\xae\xa9\xe5\xae\x83\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\x9c\xe4\xb8\xba\xe4\xb8\x80\xe4\xb8\xaa\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_GrantTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "//\xe5\x9c\xa8\xe5\x8a\xa8\xe4\xbd\x9c\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe5\x80\x99\xe7\xbb\x99\xe5\x8a\xa8\xe4\xbd\x9c\xe6\x8e\x88\xe4\xba\x88\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe9\x83\xbd\xe4\xbc\x9a\xe8\xb5\x8b\xe4\xba\x88\xe5\x88\x80""ActionComponent\xe7\x9a\x84""ActiveGameplayTags\xe4\xb8\xad\n" },
		{ "ModuleRelativePath", "Public/UAction.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe5\x8a\xa8\xe4\xbd\x9c\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe5\x80\x99\xe7\xbb\x99\xe5\x8a\xa8\xe4\xbd\x9c\xe6\x8e\x88\xe4\xba\x88\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\x87\xe7\xad\xbe\xe9\x83\xbd\xe4\xbc\x9a\xe8\xb5\x8b\xe4\xba\x88\xe5\x88\x80""ActionComponent\xe7\x9a\x84""ActiveGameplayTags\xe4\xb8\xad" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_GrantTags = { "GrantTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, GrantTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_GrantTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_GrantTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_BlockTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "//\xe6\xa3\x80\xe6\x9f\xa5\xe8\xa1\x8c\xe4\xb8\xba\xe8\x83\xbd\xe5\x90\xa6\xe8\xbf\x9b\xe8\xa1\x8c\n" },
		{ "ModuleRelativePath", "Public/UAction.h" },
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe8\xa1\x8c\xe4\xb8\xba\xe8\x83\xbd\xe5\x90\xa6\xe8\xbf\x9b\xe8\xa1\x8c" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_BlockTags = { "BlockTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, BlockTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_BlockTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_BlockTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/UAction.h" },
	};
#endif
	void Z_Construct_UClass_UAction_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((UAction*)Obj)->bAutoStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAction), &Z_Construct_UClass_UAction_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_bAutoStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "//\xe7\xbb\x99\xe8\xa1\x8c\xe4\xb8\xba\xe5\x8a\xa0\xe4\xb8\x8a\xe5\x90\x8d\xe5\xad\x97\xe8\xae\xa9\xe6\x88\x91\xe4\xbb\xac\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x8e\xbb\xe5\x90\xaf\xe5\x8a\xa8\xe6\x88\x96\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\x8d\xe7\x94\xa8\xe5\xaf\xb9\xe7\xb1\xbb\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbc\x95\xe7\x94\xa8\n" },
		{ "ModuleRelativePath", "Public/UAction.h" },
		{ "ToolTip", "\xe7\xbb\x99\xe8\xa1\x8c\xe4\xb8\xba\xe5\x8a\xa0\xe4\xb8\x8a\xe5\x90\x8d\xe5\xad\x97\xe8\xae\xa9\xe6\x88\x91\xe4\xbb\xac\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x8e\xbb\xe5\x90\xaf\xe5\x8a\xa8\xe6\x88\x96\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\x8d\xe7\x94\xa8\xe5\xaf\xb9\xe7\xb1\xbb\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbc\x95\xe7\x94\xa8" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, ActionName), METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_ActionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_GrantTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_BlockTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_bAutoStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_ActionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAction_Statics::ClassParams = {
		&UAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAction()
	{
		if (!Z_Registration_Info_UClass_UAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAction.OuterSingleton, Z_Construct_UClass_UAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAction.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UAction>()
	{
		return UAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAction);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAction, UAction::StaticClass, TEXT("UAction"), &Z_Registration_Info_UClass_UAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAction), 4021082589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_983990639(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_UAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

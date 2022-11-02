// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/ActionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionComponent() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UActionComponent::execRemoveAction)
	{
		P_GET_OBJECT(UAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execStopActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execStartActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execAddAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAction(Z_Param_Instigator,Z_Param_ActionClass);
		P_NATIVE_END;
	}
	void UActionComponent::StaticRegisterNativesUActionComponent()
	{
		UClass* Class = UActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAction", &UActionComponent::execAddAction },
			{ "RemoveAction", &UActionComponent::execRemoveAction },
			{ "StartActionByName", &UActionComponent::execStartActionByName },
			{ "StopActionByName", &UActionComponent::execStopActionByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionComponent_AddAction_Statics
	{
		struct ActionComponent_eventAddAction_Parms
		{
			AActor* Instigator;
			TSubclassOf<UAction>  ActionClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventAddAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventAddAction_Parms, ActionClass), Z_Construct_UClass_UAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_AddAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_ActionClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_AddAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_AddAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "AddAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_AddAction_Statics::ActionComponent_eventAddAction_Parms), Z_Construct_UFunction_UActionComponent_AddAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_AddAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_AddAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_AddAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_AddAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_AddAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_RemoveAction_Statics
	{
		struct ActionComponent_eventRemoveAction_Parms
		{
			UAction* Action;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventRemoveAction_Parms, Action), Z_Construct_UClass_UAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "RemoveAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::ActionComponent_eventRemoveAction_Parms), Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_RemoveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_StartActionByName_Statics
	{
		struct ActionComponent_eventStartActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStartActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStartActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionComponent_eventStartActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionComponent_eventStartActionByName_Parms), &Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "StartActionByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::ActionComponent_eventStartActionByName_Parms), Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_StartActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_StopActionByName_Statics
	{
		struct ActionComponent_eventStopActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStopActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStopActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionComponent_eventStopActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionComponent_eventStopActionByName_Parms), &Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "StopActionByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::ActionComponent_eventStopActionByName_Parms), Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_StopActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionComponent);
	UClass* Z_Construct_UClass_UActionComponent_NoRegister()
	{
		return UActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGameplayTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionComponent_AddAction, "AddAction" }, // 3570390594
		{ &Z_Construct_UFunction_UActionComponent_RemoveAction, "RemoveAction" }, // 2522915359
		{ &Z_Construct_UFunction_UActionComponent_StartActionByName, "StartActionByName" }, // 410203766
		{ &Z_Construct_UFunction_UActionComponent_StopActionByName, "StopActionByName" }, // 2540000550
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionComponent.h" },
		{ "ModuleRelativePath", "Public/ActionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags = { "ActiveGameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionComponent, ActiveGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionComponent_Statics::ClassParams = {
		&UActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionComponent()
	{
		if (!Z_Registration_Info_UClass_UActionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionComponent.OuterSingleton, Z_Construct_UClass_UActionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionComponent.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UActionComponent>()
	{
		return UActionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionComponent);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionComponent, UActionComponent::StaticClass, TEXT("UActionComponent"), &Z_Registration_Info_UClass_UActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionComponent), 1805332473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionComponent_h_4167749555(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ActionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

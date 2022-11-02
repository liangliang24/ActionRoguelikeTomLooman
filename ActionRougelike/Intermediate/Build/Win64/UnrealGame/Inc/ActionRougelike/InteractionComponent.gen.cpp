// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/InteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UWorldUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionComponent::execServerInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_InFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInteract_Implementation(Z_Param_InFocus);
		P_NATIVE_END;
	}
	static FName NAME_UInteractionComponent_ServerInteract = FName(TEXT("ServerInteract"));
	void UInteractionComponent::ServerInteract(AActor* InFocus)
	{
		InteractionComponent_eventServerInteract_Parms Parms;
		Parms.InFocus=InFocus;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_ServerInteract),&Parms);
	}
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
		UClass* Class = UInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerInteract", &UInteractionComponent::execServerInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventServerInteract_Parms, InFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::NewProp_InFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Unreliable - \xe5\x8f\xaa\xe4\xbc\x9a\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x8c\xe4\xb8\x8d\xe7\xae\xa1\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x9c\x89\xe6\xb2\xa1\xe6\x9c\x89\xe6\x94\xb6\xe5\x88\xb0\n//Reliable - \xe4\xbc\x9a\xe4\xb8\x80\xe9\x81\x8d\xe5\x8f\x88\xe4\xb8\x80\xe9\x81\x8d\xe5\x9c\xb0\xe5\x8f\x91\xe9\x80\x81\xef\xbc\x8c\xe7\x9b\xb4\xe5\x88\xb0\xe7\xa1\xae\xe4\xbf\x9d\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x94\xb6\xe5\x88\xb0\xe4\xb8\xba\xe6\xad\xa2\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "Unreliable - \xe5\x8f\xaa\xe4\xbc\x9a\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x8c\xe4\xb8\x8d\xe7\xae\xa1\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x9c\x89\xe6\xb2\xa1\xe6\x9c\x89\xe6\x94\xb6\xe5\x88\xb0\nReliable - \xe4\xbc\x9a\xe4\xb8\x80\xe9\x81\x8d\xe5\x8f\x88\xe4\xb8\x80\xe9\x81\x8d\xe5\x9c\xb0\xe5\x8f\x91\xe9\x80\x81\xef\xbc\x8c\xe7\x9b\xb4\xe5\x88\xb0\xe7\xa1\xae\xe4\xbf\x9d\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x94\xb6\xe5\x88\xb0\xe4\xb8\xba\xe6\xad\xa2" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "ServerInteract", nullptr, nullptr, sizeof(InteractionComponent_eventServerInteract_Parms), Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_ServerInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionComponent);
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultWidgetInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_ServerInteract, "ServerInteract" }, // 3102283081
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractionComponent.h" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedActor = { "FocusedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, FocusedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetClass = { "DefaultWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, DefaultWidgetClass), Z_Construct_UClass_UWorldUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetInstance = { "DefaultWidgetInstance", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, DefaultWidgetInstance), Z_Construct_UClass_UWorldUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DefaultWidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
		&UInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UInteractionComponent>()
	{
		return UInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionComponent, UInteractionComponent::StaticClass, TEXT("UInteractionComponent"), &Z_Registration_Info_UClass_UInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionComponent), 766326957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_3706224833(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_InteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

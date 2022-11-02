// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/GameplayInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInterface() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UGameplayInterface_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UGameplayInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IGameplayInterface::execOnActorLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameplayInterface::execInteract)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	void IGameplayInterface::Interact(APawn* InstigatorPawn)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void IGameplayInterface::OnActorLoaded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnActorLoaded instead.");
	}
	void UGameplayInterface::StaticRegisterNativesUGameplayInterface()
	{
		UClass* Class = UGameplayInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &IGameplayInterface::execInteract },
			{ "OnActorLoaded", &IGameplayInterface::execOnActorLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayInterface_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayInterface_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayInterface_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayInterface_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayInterface_Interact_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\xb8\x8c\xe6\x9c\x9b\xe8\xb0\x83\xe7\x94\xa8\xe4\xba\xa4\xe4\xba\x92\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe6\x97\xb6\xe5\x80\x99\xef\xbc\x8c\xe6\x98\xaf\xe8\xb0\x81\xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe5\xae\x83\n//\xe5\x90\x8c\xe6\x97\xb6\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\n//BlueprintNativeEvent\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xa9\xe5\x87\xbd\xe6\x95\xb0\xe6\x97\xa2\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8""c++\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0\n//\xe4\xbd\x86\xe6\x98\xaf""BlueprintImplementableEvent\xe5\x8f\xaa\xe8\x83\xbd\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0\n" },
		{ "ModuleRelativePath", "Public/GameplayInterface.h" },
		{ "ToolTip", "\xe5\xb8\x8c\xe6\x9c\x9b\xe8\xb0\x83\xe7\x94\xa8\xe4\xba\xa4\xe4\xba\x92\xe5\x87\xbd\xe6\x95\xb0\xe7\x9a\x84\xe6\x97\xb6\xe5\x80\x99\xef\xbc\x8c\xe6\x98\xaf\xe8\xb0\x81\xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe5\xae\x83\n\xe5\x90\x8c\xe6\x97\xb6\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\nBlueprintNativeEvent\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xa9\xe5\x87\xbd\xe6\x95\xb0\xe6\x97\xa2\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8""c++\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0\n\xe4\xbd\x86\xe6\x98\xaf""BlueprintImplementableEvent\xe5\x8f\xaa\xe8\x83\xbd\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayInterface, nullptr, "Interact", nullptr, nullptr, sizeof(GameplayInterface_eventInteract_Parms), Z_Construct_UFunction_UGameplayInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayInterface_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayInterface_OnActorLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayInterface_OnActorLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayInterface_OnActorLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayInterface, nullptr, "OnActorLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayInterface_OnActorLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayInterface_OnActorLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayInterface_OnActorLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayInterface_OnActorLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayInterface);
	UClass* Z_Construct_UClass_UGameplayInterface_NoRegister()
	{
		return UGameplayInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayInterface_Interact, "Interact" }, // 3438226248
		{ &Z_Construct_UFunction_UGameplayInterface_OnActorLoaded, "OnActorLoaded" }, // 1525378696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayInterface_Statics::ClassParams = {
		&UGameplayInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayInterface()
	{
		if (!Z_Registration_Info_UClass_UGameplayInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayInterface.OuterSingleton, Z_Construct_UClass_UGameplayInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayInterface.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UGameplayInterface>()
	{
		return UGameplayInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayInterface);
	static FName NAME_UGameplayInterface_Interact = FName(TEXT("Interact"));
	void IGameplayInterface::Execute_Interact(UObject* O, APawn* InstigatorPawn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameplayInterface::StaticClass()));
		GameplayInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameplayInterface_Interact);
		if (Func)
		{
			Parms.InstigatorPawn=InstigatorPawn;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameplayInterface*)(O->GetNativeInterfaceAddress(UGameplayInterface::StaticClass())))
		{
			I->Interact_Implementation(InstigatorPawn);
		}
	}
	static FName NAME_UGameplayInterface_OnActorLoaded = FName(TEXT("OnActorLoaded"));
	void IGameplayInterface::Execute_OnActorLoaded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameplayInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGameplayInterface_OnActorLoaded);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGameplayInterface*)(O->GetNativeInterfaceAddress(UGameplayInterface::StaticClass())))
		{
			I->OnActorLoaded_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayInterface, UGameplayInterface::StaticClass, TEXT("UGameplayInterface"), &Z_Registration_Info_UClass_UGameplayInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayInterface), 427883311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_4203998597(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_GameplayInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/MySaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySaveGame() {}
// Cross Module References
	ACTIONROUGELIKE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UMySaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSaveData;
class UScriptStruct* FActorSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSaveData, Z_Construct_UPackage__Script_ActionRougelike(), TEXT("ActorSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton;
}
template<> ACTIONROUGELIKE_API UScriptStruct* StaticStruct<FActorSaveData>()
{
	return FActorSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSaveData, ActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSaveData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ByteData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSaveData, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ByteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ByteData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ByteData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ByteData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
		nullptr,
		&NewStructOps,
		"ActorSaveData",
		sizeof(FActorSaveData),
		alignof(FActorSaveData),
		Z_Construct_UScriptStruct_FActorSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton, Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton;
	}
	void UMySaveGame::StaticRegisterNativesUMySaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySaveGame);
	UClass* Z_Construct_UClass_UMySaveGame_NoRegister()
	{
		return UMySaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMySaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Credits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Credits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MySaveGame.h" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_Credits_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_Credits = { "Credits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, Credits), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_Credits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_Credits_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_Inner = { "SavedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(nullptr, 0) }; // 768323015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors = { "SavedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SavedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_MetaData)) }; // 768323015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_Credits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySaveGame_Statics::ClassParams = {
		&UMySaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMySaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySaveGame()
	{
		if (!Z_Registration_Info_UClass_UMySaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySaveGame.OuterSingleton, Z_Construct_UClass_UMySaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySaveGame.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UMySaveGame>()
	{
		return UMySaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySaveGame);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_Statics::ScriptStructInfo[] = {
		{ FActorSaveData::StaticStruct, Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps, TEXT("ActorSaveData"), &Z_Registration_Info_UScriptStruct_ActorSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSaveData), 768323015U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySaveGame, UMySaveGame::StaticClass, TEXT("UMySaveGame"), &Z_Registration_Info_UClass_UMySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySaveGame), 462688961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_3301296773(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MySaveGame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/ItemChest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemChest() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AItemChest_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_AItemChest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UGameplayInterface_NoRegister();
// End Cross Module References
	void AItemChest::StaticRegisterNativesAItemChest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemChest);
	UClass* Z_Construct_UClass_AItemChest_NoRegister()
	{
		return AItemChest::StaticClass();
	}
	struct Z_Construct_UClass_AItemChest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLidOpened_MetaData[];
#endif
		static void NewProp_bLidOpened_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLidOpened;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LidMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LidMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemChest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemChest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemChest.h" },
		{ "ModuleRelativePath", "Public/ItemChest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemChest_Statics::NewProp_TargetPitch_MetaData[] = {
		{ "Category", "ItemChest" },
		{ "ModuleRelativePath", "Public/ItemChest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemChest_Statics::NewProp_TargetPitch = { "TargetPitch", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemChest, TargetPitch), METADATA_PARAMS(Z_Construct_UClass_AItemChest_Statics::NewProp_TargetPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemChest_Statics::NewProp_TargetPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemChest_Statics::NewProp_bLidOpened_MetaData[] = {
		{ "Category", "ItemChest" },
		{ "Comment", "//\xe5\x8f\xaa\xe6\x9c\x89\xe6\xa0\x87\xe8\xae\xb0\xe4\xba\x86Replicated\xe5\x8f\x98\xe9\x87\x8f\xe6\x89\x8d\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe5\xa4\x8d\xe5\x88\xb6\xe5\x90\xa6\xe5\x88\x99\xe4\xbc\x9a\xe6\x8a\xa5\xe9\x94\x99\n//ReplicatedUsing\xe6\x98\xaf\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8a\x8a\xe8\xbf\x99\xe4\xb8\xaa\xe5\x8f\x98\xe9\x87\x8f\xe7\xbb\x91\xe5\xae\x9a\xe5\x88\xb0\xe5\x8f\xa6\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x98\xe9\x87\x8f,\xe4\xbd\x86\xe6\x98\xaf\xe8\xa2\xab\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\xaa\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\x9c\xa8\xe7\x8e\xa9\xe5\xae\xb6\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe8\x80\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf\xe4\xb8\x8a\xe8\x87\xaa\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91\n" },
		{ "ModuleRelativePath", "Public/ItemChest.h" },
		{ "ToolTip", "\xe5\x8f\xaa\xe6\x9c\x89\xe6\xa0\x87\xe8\xae\xb0\xe4\xba\x86Replicated\xe5\x8f\x98\xe9\x87\x8f\xe6\x89\x8d\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe5\xa4\x8d\xe5\x88\xb6\xe5\x90\xa6\xe5\x88\x99\xe4\xbc\x9a\xe6\x8a\xa5\xe9\x94\x99\nReplicatedUsing\xe6\x98\xaf\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8a\x8a\xe8\xbf\x99\xe4\xb8\xaa\xe5\x8f\x98\xe9\x87\x8f\xe7\xbb\x91\xe5\xae\x9a\xe5\x88\xb0\xe5\x8f\xa6\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x98\xe9\x87\x8f,\xe4\xbd\x86\xe6\x98\xaf\xe8\xa2\xab\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\xaa\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\x9c\xa8\xe7\x8e\xa9\xe5\xae\xb6\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe8\x80\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf\xe4\xb8\x8a\xe8\x87\xaa\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91" },
	};
#endif
	void Z_Construct_UClass_AItemChest_Statics::NewProp_bLidOpened_SetBit(void* Obj)
	{
		((AItemChest*)Obj)->bLidOpened = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemChest_Statics::NewProp_bLidOpened = { "bLidOpened", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItemChest), &Z_Construct_UClass_AItemChest_Statics::NewProp_bLidOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItemChest_Statics::NewProp_bLidOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemChest_Statics::NewProp_bLidOpened_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemChest_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "ItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemChest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemChest_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemChest, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemChest_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemChest_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemChest_Statics::NewProp_LidMesh_MetaData[] = {
		{ "Category", "ItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemChest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemChest_Statics::NewProp_LidMesh = { "LidMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemChest, LidMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemChest_Statics::NewProp_LidMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemChest_Statics::NewProp_LidMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemChest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemChest_Statics::NewProp_TargetPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemChest_Statics::NewProp_bLidOpened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemChest_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemChest_Statics::NewProp_LidMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AItemChest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayInterface_NoRegister, (int32)VTABLE_OFFSET(AItemChest, IGameplayInterface), false },  // 427883311
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemChest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemChest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemChest_Statics::ClassParams = {
		&AItemChest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItemChest_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemChest_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemChest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemChest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemChest()
	{
		if (!Z_Registration_Info_UClass_AItemChest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemChest.OuterSingleton, Z_Construct_UClass_AItemChest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemChest.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<AItemChest>()
	{
		return AItemChest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemChest);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ItemChest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ItemChest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemChest, AItemChest::StaticClass, TEXT("AItemChest"), &Z_Registration_Info_UClass_AItemChest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemChest), 1837060271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ItemChest_h_1770523007(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ItemChest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_ItemChest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

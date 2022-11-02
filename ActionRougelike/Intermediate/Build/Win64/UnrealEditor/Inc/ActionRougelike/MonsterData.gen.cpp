// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/MonsterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterData() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UMonsterData_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UMonsterData();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UMonsterData::StaticRegisterNativesUMonsterData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMonsterData);
	UClass* Z_Construct_UClass_UMonsterData_NoRegister()
	{
		return UMonsterData::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonsterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MonsterClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MonsterData.h" },
		{ "ModuleRelativePath", "Public/MonsterData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterData_Statics::NewProp_MonsterClass_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "ModuleRelativePath", "Public/MonsterData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMonsterData_Statics::NewProp_MonsterClass = { "MonsterClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterData, MonsterClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMonsterData_Statics::NewProp_MonsterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterData_Statics::NewProp_MonsterClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMonsterData_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterData_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//\xe8\xbf\x99\xe4\xb8\xaa\xe6\x80\xaa\xe7\x89\xa9\xe6\x89\x80\xe6\x8b\xa5\xe6\x9c\x89\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x88\x96\xe8\x80\x85""Buff\n" },
		{ "ModuleRelativePath", "Public/MonsterData.h" },
		{ "ToolTip", "\xe8\xbf\x99\xe4\xb8\xaa\xe6\x80\xaa\xe7\x89\xa9\xe6\x89\x80\xe6\x8b\xa5\xe6\x9c\x89\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x88\x96\xe8\x80\x85""Buff" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMonsterData_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterData, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMonsterData_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterData_Statics::NewProp_Actions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/MonsterData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMonsterData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMonsterData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterData_Statics::NewProp_Icon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterData_Statics::NewProp_MonsterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterData_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterData_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterData_Statics::NewProp_Icon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMonsterData_Statics::ClassParams = {
		&UMonsterData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMonsterData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMonsterData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonsterData()
	{
		if (!Z_Registration_Info_UClass_UMonsterData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMonsterData.OuterSingleton, Z_Construct_UClass_UMonsterData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMonsterData.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UMonsterData>()
	{
		return UMonsterData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterData);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MonsterData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MonsterData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMonsterData, UMonsterData::StaticClass, TEXT("UMonsterData"), &Z_Registration_Info_UClass_UMonsterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMonsterData), 1863562309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MonsterData_h_673112356(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MonsterData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_MonsterData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

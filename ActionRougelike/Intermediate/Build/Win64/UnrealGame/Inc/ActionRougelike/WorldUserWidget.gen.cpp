// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougelike/Public/WorldUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldUserWidget() {}
// Cross Module References
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UWorldUserWidget_NoRegister();
	ACTIONROUGELIKE_API UClass* Z_Construct_UClass_UWorldUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ActionRougelike();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UWorldUserWidget::StaticRegisterNativesUWorldUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldUserWidget);
	UClass* Z_Construct_UClass_UWorldUserWidget_NoRegister()
	{
		return UWorldUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWorldUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSizeBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSizeBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WorldUserWidget.h" },
		{ "ModuleRelativePath", "Public/WorldUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_ParentSizeBox = { "ParentSizeBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldUserWidget, ParentSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_AttachedActor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WorldUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldUserWidget, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_AttachedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_AttachedActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_ParentSizeBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldUserWidget_Statics::NewProp_AttachedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldUserWidget_Statics::ClassParams = {
		&UWorldUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldUserWidget()
	{
		if (!Z_Registration_Info_UClass_UWorldUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldUserWidget.OuterSingleton, Z_Construct_UClass_UWorldUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldUserWidget.OuterSingleton;
	}
	template<> ACTIONROUGELIKE_API UClass* StaticClass<UWorldUserWidget>()
	{
		return UWorldUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldUserWidget);
	struct Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_WorldUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_WorldUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldUserWidget, UWorldUserWidget::StaticClass, TEXT("UWorldUserWidget"), &Z_Registration_Info_UClass_UWorldUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldUserWidget), 2697139229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_WorldUserWidget_h_2234136786(TEXT("/Script/ActionRougelike"),
		Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_WorldUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRougelike_Source_ActionRougelike_Public_WorldUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

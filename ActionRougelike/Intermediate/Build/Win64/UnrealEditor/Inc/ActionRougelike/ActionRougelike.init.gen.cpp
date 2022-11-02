// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRougelike_init() {}
	ACTIONROUGELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature();
	ACTIONROUGELIKE_API UFunction* Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ActionRougelike;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ActionRougelike()
	{
		if (!Z_Registration_Info_UPackage__Script_ActionRougelike.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionRougelike_OnCreditChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionRougelike_OnHealthChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActionRougelike",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2C1E489C,
				0x0A0F1016,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ActionRougelike.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ActionRougelike.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ActionRougelike(Z_Construct_UPackage__Script_ActionRougelike, TEXT("/Script/ActionRougelike"), Z_Registration_Info_UPackage__Script_ActionRougelike, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2C1E489C, 0x0A0F1016));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAT/Public/DAT_ComplexAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAT_ComplexAbility() {}
// Cross Module References
	DAT_API UClass* Z_Construct_UClass_UDAT_BaseAbility();
	DAT_API UClass* Z_Construct_UClass_UDAT_ComplexAbility();
	DAT_API UClass* Z_Construct_UClass_UDAT_ComplexAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DAT();
// End Cross Module References
	void UDAT_ComplexAbility::StaticRegisterNativesUDAT_ComplexAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAT_ComplexAbility);
	UClass* Z_Construct_UClass_UDAT_ComplexAbility_NoRegister()
	{
		return UDAT_ComplexAbility::StaticClass();
	}
	struct Z_Construct_UClass_UDAT_ComplexAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDAT_ComplexAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDAT_BaseAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAT_ComplexAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DAT_ComplexAbility.h" },
		{ "ModuleRelativePath", "Public/DAT_ComplexAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDAT_ComplexAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAT_ComplexAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAT_ComplexAbility_Statics::ClassParams = {
		&UDAT_ComplexAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDAT_ComplexAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDAT_ComplexAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDAT_ComplexAbility()
	{
		if (!Z_Registration_Info_UClass_UDAT_ComplexAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAT_ComplexAbility.OuterSingleton, Z_Construct_UClass_UDAT_ComplexAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDAT_ComplexAbility.OuterSingleton;
	}
	template<> DAT_API UClass* StaticClass<UDAT_ComplexAbility>()
	{
		return UDAT_ComplexAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDAT_ComplexAbility);
	UDAT_ComplexAbility::~UDAT_ComplexAbility() {}
	struct Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_ComplexAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_ComplexAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDAT_ComplexAbility, UDAT_ComplexAbility::StaticClass, TEXT("UDAT_ComplexAbility"), &Z_Registration_Info_UClass_UDAT_ComplexAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAT_ComplexAbility), 830908836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_ComplexAbility_h_1090052017(TEXT("/Script/DAT"),
		Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_ComplexAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_ComplexAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

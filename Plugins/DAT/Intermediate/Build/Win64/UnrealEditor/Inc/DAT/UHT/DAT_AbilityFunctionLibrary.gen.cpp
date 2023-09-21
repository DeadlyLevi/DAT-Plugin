// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAT/Public/DAT_AbilityFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAT_AbilityFunctionLibrary() {}
// Cross Module References
	DAT_API UClass* Z_Construct_UClass_UDAT_AbilityFunctionLibrary();
	DAT_API UClass* Z_Construct_UClass_UDAT_AbilityFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DAT();
// End Cross Module References
	void UDAT_AbilityFunctionLibrary::StaticRegisterNativesUDAT_AbilityFunctionLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAT_AbilityFunctionLibrary);
	UClass* Z_Construct_UClass_UDAT_AbilityFunctionLibrary_NoRegister()
	{
		return UDAT_AbilityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DAT_AbilityFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/DAT_AbilityFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAT_AbilityFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics::ClassParams = {
		&UDAT_AbilityFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDAT_AbilityFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDAT_AbilityFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAT_AbilityFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDAT_AbilityFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDAT_AbilityFunctionLibrary.OuterSingleton;
	}
	template<> DAT_API UClass* StaticClass<UDAT_AbilityFunctionLibrary>()
	{
		return UDAT_AbilityFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDAT_AbilityFunctionLibrary);
	UDAT_AbilityFunctionLibrary::~UDAT_AbilityFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AbilityFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AbilityFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDAT_AbilityFunctionLibrary, UDAT_AbilityFunctionLibrary::StaticClass, TEXT("UDAT_AbilityFunctionLibrary"), &Z_Registration_Info_UClass_UDAT_AbilityFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAT_AbilityFunctionLibrary), 2869015074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AbilityFunctionLibrary_h_2741541690(TEXT("/Script/DAT"),
		Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AbilityFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AbilityFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

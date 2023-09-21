// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAT/Public/DAT_AI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAT_AI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DAT_API UClass* Z_Construct_UClass_ADAT_AI();
	DAT_API UClass* Z_Construct_UClass_ADAT_AI_NoRegister();
	DAT_API UClass* Z_Construct_UClass_UDAT_BaseAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DAT();
// End Cross Module References
	DEFINE_FUNCTION(ADAT_AI::execAcquireAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcquireAbility(Z_Param_AbilityToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADAT_AI::execRequestAbilityExecution)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToExecute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestAbilityExecution(Z_Param_AbilityToExecute);
		P_NATIVE_END;
	}
	void ADAT_AI::StaticRegisterNativesADAT_AI()
	{
		UClass* Class = ADAT_AI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireAbility", &ADAT_AI::execAcquireAbility },
			{ "RequestAbilityExecution", &ADAT_AI::execRequestAbilityExecution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics
	{
		struct DAT_AI_eventAcquireAbility_Parms
		{
			TSubclassOf<UDAT_BaseAbility>  AbilityToAdd;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::NewProp_AbilityToAdd = { "AbilityToAdd", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DAT_AI_eventAcquireAbility_Parms, AbilityToAdd), Z_Construct_UClass_UClass, Z_Construct_UClass_UDAT_BaseAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::NewProp_AbilityToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/DAT_AI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAT_AI, nullptr, "AcquireAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::DAT_AI_eventAcquireAbility_Parms), Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADAT_AI_AcquireAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAT_AI_AcquireAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics
	{
		struct DAT_AI_eventRequestAbilityExecution_Parms
		{
			TSubclassOf<UDAT_BaseAbility>  AbilityToExecute;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToExecute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::NewProp_AbilityToExecute = { "AbilityToExecute", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DAT_AI_eventRequestAbilityExecution_Parms, AbilityToExecute), Z_Construct_UClass_UClass, Z_Construct_UClass_UDAT_BaseAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::NewProp_AbilityToExecute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/DAT_AI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAT_AI, nullptr, "RequestAbilityExecution", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::DAT_AI_eventRequestAbilityExecution_Parms), Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAT_AI);
	UClass* Z_Construct_UClass_ADAT_AI_NoRegister()
	{
		return ADAT_AI::StaticClass();
	}
	struct Z_Construct_UClass_ADAT_AI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADAT_AI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADAT_AI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAT_AI_AcquireAbility, "AcquireAbility" }, // 605808751
		{ &Z_Construct_UFunction_ADAT_AI_RequestAbilityExecution, "RequestAbilityExecution" }, // 2466797731
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADAT_AI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DAT_AI.h" },
		{ "ModuleRelativePath", "Public/DAT_AI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADAT_AI_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDAT_BaseAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADAT_AI_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/DAT_AI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADAT_AI_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADAT_AI, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADAT_AI_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADAT_AI_Statics::NewProp_Abilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAT_AI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAT_AI_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAT_AI_Statics::NewProp_Abilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADAT_AI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAT_AI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAT_AI_Statics::ClassParams = {
		&ADAT_AI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADAT_AI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADAT_AI_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADAT_AI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADAT_AI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADAT_AI()
	{
		if (!Z_Registration_Info_UClass_ADAT_AI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAT_AI.OuterSingleton, Z_Construct_UClass_ADAT_AI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADAT_AI.OuterSingleton;
	}
	template<> DAT_API UClass* StaticClass<ADAT_AI>()
	{
		return ADAT_AI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADAT_AI);
	ADAT_AI::~ADAT_AI() {}
	struct Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADAT_AI, ADAT_AI::StaticClass, TEXT("ADAT_AI"), &Z_Registration_Info_UClass_ADAT_AI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAT_AI), 2490045956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_2251069471(TEXT("/Script/DAT"),
		Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

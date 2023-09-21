// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAT/Public/DAT_BaseAbility.h"
#include "DAT/Public/DAT_CustomStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAT_BaseAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DAT_API UClass* Z_Construct_UClass_ADAT_AI_NoRegister();
	DAT_API UClass* Z_Construct_UClass_UDAT_BaseAbility();
	DAT_API UClass* Z_Construct_UClass_UDAT_BaseAbility_NoRegister();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDATAbilityStats();
	UPackage* Z_Construct_UPackage__Script_DAT();
// End Cross Module References
	DEFINE_FUNCTION(UDAT_BaseAbility::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAT_BaseAbility::execCreateAIProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAIProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAT_BaseAbility::execExecuteLogic)
	{
		P_GET_OBJECT(ADAT_AI,Z_Param_AIref);
		P_GET_STRUCT(FDATAbilityStats,Z_Param_AIAbilityStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteLogic_Implementation(Z_Param_AIref,Z_Param_AIAbilityStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAT_BaseAbility::execLoadAbilityData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAbilityData_Implementation();
		P_NATIVE_END;
	}
	struct DAT_BaseAbility_eventExecuteLogic_Parms
	{
		const ADAT_AI* AIref;
		FDATAbilityStats AIAbilityStats;
	};
	static FName NAME_UDAT_BaseAbility_ExecuteLogic = FName(TEXT("ExecuteLogic"));
	void UDAT_BaseAbility::ExecuteLogic(const ADAT_AI* AIref, FDATAbilityStats AIAbilityStats)
	{
		DAT_BaseAbility_eventExecuteLogic_Parms Parms;
		Parms.AIref=AIref;
		Parms.AIAbilityStats=AIAbilityStats;
		ProcessEvent(FindFunctionChecked(NAME_UDAT_BaseAbility_ExecuteLogic),&Parms);
	}
	static FName NAME_UDAT_BaseAbility_LoadAbilityData = FName(TEXT("LoadAbilityData"));
	void UDAT_BaseAbility::LoadAbilityData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDAT_BaseAbility_LoadAbilityData),NULL);
	}
	void UDAT_BaseAbility::StaticRegisterNativesUDAT_BaseAbility()
	{
		UClass* Class = UDAT_BaseAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAIProperties", &UDAT_BaseAbility::execCreateAIProperties },
			{ "ExecuteLogic", &UDAT_BaseAbility::execExecuteLogic },
			{ "GetPriority", &UDAT_BaseAbility::execGetPriority },
			{ "LoadAbilityData", &UDAT_BaseAbility::execLoadAbilityData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// Create Properties on the AI that uses this Ability and add the default values on them.\n" },
		{ "ModuleRelativePath", "Public/DAT_BaseAbility.h" },
		{ "ToolTip", "Create Properties on the AI that uses this Ability and add the default values on them." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAT_BaseAbility, nullptr, "CreateAIProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIref_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIref;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AIAbilityStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::NewProp_AIref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::NewProp_AIref = { "AIref", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DAT_BaseAbility_eventExecuteLogic_Parms, AIref), Z_Construct_UClass_ADAT_AI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::NewProp_AIref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::NewProp_AIref_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::NewProp_AIAbilityStats = { "AIAbilityStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DAT_BaseAbility_eventExecuteLogic_Parms, AIAbilityStats), Z_Construct_UScriptStruct_FDATAbilityStats, METADATA_PARAMS(nullptr, 0) }; // 2632433345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::NewProp_AIref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::NewProp_AIAbilityStats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Execute all the logic of the ability.\n" },
		{ "ModuleRelativePath", "Public/DAT_BaseAbility.h" },
		{ "ToolTip", "Execute all the logic of the ability." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAT_BaseAbility, nullptr, "ExecuteLogic", nullptr, nullptr, sizeof(DAT_BaseAbility_eventExecuteLogic_Parms), Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics
	{
		struct DAT_BaseAbility_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DAT_BaseAbility_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// Get the priority of the ability.\n" },
		{ "ModuleRelativePath", "Public/DAT_BaseAbility.h" },
		{ "ToolTip", "Get the priority of the ability." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAT_BaseAbility, nullptr, "GetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::DAT_BaseAbility_eventGetPriority_Parms), Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAT_BaseAbility_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAT_BaseAbility_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Load data from BP to C++.\n" },
		{ "ModuleRelativePath", "Public/DAT_BaseAbility.h" },
		{ "ToolTip", "Load data from BP to C++." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAT_BaseAbility, nullptr, "LoadAbilityData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAT_BaseAbility);
	UClass* Z_Construct_UClass_UDAT_BaseAbility_NoRegister()
	{
		return UDAT_BaseAbility::StaticClass();
	}
	struct Z_Construct_UClass_UDAT_BaseAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abilityStats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_abilityStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDAT_BaseAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDAT_BaseAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAT_BaseAbility_CreateAIProperties, "CreateAIProperties" }, // 4217247229
		{ &Z_Construct_UFunction_UDAT_BaseAbility_ExecuteLogic, "ExecuteLogic" }, // 1556013456
		{ &Z_Construct_UFunction_UDAT_BaseAbility_GetPriority, "GetPriority" }, // 762815156
		{ &Z_Construct_UFunction_UDAT_BaseAbility_LoadAbilityData, "LoadAbilityData" }, // 987474771
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAT_BaseAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DAT_BaseAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DAT_BaseAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DAT_BaseAbility.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDAT_BaseAbility, Priority), METADATA_PARAMS(Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_abilityStats_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// Ability Data Struct.\n" },
		{ "ModuleRelativePath", "Public/DAT_BaseAbility.h" },
		{ "ToolTip", "Ability Data Struct." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_abilityStats = { "abilityStats", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDAT_BaseAbility, abilityStats), Z_Construct_UScriptStruct_FDATAbilityStats, METADATA_PARAMS(Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_abilityStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_abilityStats_MetaData)) }; // 2632433345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAT_BaseAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAT_BaseAbility_Statics::NewProp_abilityStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDAT_BaseAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAT_BaseAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAT_BaseAbility_Statics::ClassParams = {
		&UDAT_BaseAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDAT_BaseAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDAT_BaseAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDAT_BaseAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDAT_BaseAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDAT_BaseAbility()
	{
		if (!Z_Registration_Info_UClass_UDAT_BaseAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAT_BaseAbility.OuterSingleton, Z_Construct_UClass_UDAT_BaseAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDAT_BaseAbility.OuterSingleton;
	}
	template<> DAT_API UClass* StaticClass<UDAT_BaseAbility>()
	{
		return UDAT_BaseAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDAT_BaseAbility);
	UDAT_BaseAbility::~UDAT_BaseAbility() {}
	struct Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDAT_BaseAbility, UDAT_BaseAbility::StaticClass, TEXT("UDAT_BaseAbility"), &Z_Registration_Info_UClass_UDAT_BaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAT_BaseAbility), 2719601896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_4195840481(TEXT("/Script/DAT"),
		Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

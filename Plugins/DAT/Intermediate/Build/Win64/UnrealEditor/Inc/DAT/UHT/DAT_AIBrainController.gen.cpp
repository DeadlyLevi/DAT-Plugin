// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAT/Public/DAT_AIBrainController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAT_AIBrainController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	DAT_API UClass* Z_Construct_UClass_ADAT_AI_NoRegister();
	DAT_API UClass* Z_Construct_UClass_ADAT_AIBrainController();
	DAT_API UClass* Z_Construct_UClass_ADAT_AIBrainController_NoRegister();
	DAT_API UClass* Z_Construct_UClass_UDAT_BaseAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DAT();
// End Cross Module References
	DEFINE_FUNCTION(ADAT_AIBrainController::execExecuteAbility)
	{
		P_GET_OBJECT(ADAT_AI,Z_Param_RequestingAI);
		P_GET_OBJECT(UDAT_BaseAbility,Z_Param_AbilityToExecute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAbility(Z_Param_RequestingAI,Z_Param_AbilityToExecute);
		P_NATIVE_END;
	}
	void ADAT_AIBrainController::StaticRegisterNativesADAT_AIBrainController()
	{
		UClass* Class = ADAT_AIBrainController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAbility", &ADAT_AIBrainController::execExecuteAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics
	{
		struct DAT_AIBrainController_eventExecuteAbility_Parms
		{
			ADAT_AI* RequestingAI;
			UDAT_BaseAbility* AbilityToExecute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestingAI;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityToExecute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::NewProp_RequestingAI = { "RequestingAI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DAT_AIBrainController_eventExecuteAbility_Parms, RequestingAI), Z_Construct_UClass_ADAT_AI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::NewProp_AbilityToExecute = { "AbilityToExecute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DAT_AIBrainController_eventExecuteAbility_Parms, AbilityToExecute), Z_Construct_UClass_UDAT_BaseAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::NewProp_RequestingAI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::NewProp_AbilityToExecute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// Execute requested ability\n" },
		{ "ModuleRelativePath", "Public/DAT_AIBrainController.h" },
		{ "ToolTip", "Execute requested ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAT_AIBrainController, nullptr, "ExecuteAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::DAT_AIBrainController_eventExecuteAbility_Parms), Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAT_AIBrainController);
	UClass* Z_Construct_UClass_ADAT_AIBrainController_NoRegister()
	{
		return ADAT_AIBrainController::StaticClass();
	}
	struct Z_Construct_UClass_ADAT_AIBrainController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADAT_AIBrainController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADAT_AIBrainController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAT_AIBrainController_ExecuteAbility, "ExecuteAbility" }, // 1680411762
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADAT_AIBrainController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DAT_AIBrainController.h" },
		{ "ModuleRelativePath", "Public/DAT_AIBrainController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADAT_AIBrainController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAT_AIBrainController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAT_AIBrainController_Statics::ClassParams = {
		&ADAT_AIBrainController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADAT_AIBrainController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADAT_AIBrainController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADAT_AIBrainController()
	{
		if (!Z_Registration_Info_UClass_ADAT_AIBrainController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAT_AIBrainController.OuterSingleton, Z_Construct_UClass_ADAT_AIBrainController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADAT_AIBrainController.OuterSingleton;
	}
	template<> DAT_API UClass* StaticClass<ADAT_AIBrainController>()
	{
		return ADAT_AIBrainController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADAT_AIBrainController);
	ADAT_AIBrainController::~ADAT_AIBrainController() {}
	struct Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AIBrainController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AIBrainController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADAT_AIBrainController, ADAT_AIBrainController::StaticClass, TEXT("ADAT_AIBrainController"), &Z_Registration_Info_UClass_ADAT_AIBrainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAT_AIBrainController), 3477145332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AIBrainController_h_2788069209(TEXT("/Script/DAT"),
		Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AIBrainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AIBrainController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

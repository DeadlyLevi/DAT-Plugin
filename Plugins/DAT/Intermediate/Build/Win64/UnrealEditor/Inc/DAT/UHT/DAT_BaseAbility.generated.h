// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAT_BaseAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADAT_AI;
struct FDATAbilityStats;
#ifdef DAT_DAT_BaseAbility_generated_h
#error "DAT_BaseAbility.generated.h already included, missing '#pragma once' in DAT_BaseAbility.h"
#endif
#define DAT_DAT_BaseAbility_generated_h

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_SPARSE_DATA
#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_RPC_WRAPPERS \
	virtual void ExecuteLogic_Implementation(const ADAT_AI* AIref, FDATAbilityStats AIAbilityStats); \
	virtual void LoadAbilityData_Implementation(); \
 \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execCreateAIProperties); \
	DECLARE_FUNCTION(execExecuteLogic); \
	DECLARE_FUNCTION(execLoadAbilityData);


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteLogic_Implementation(const ADAT_AI* AIref, FDATAbilityStats AIAbilityStats); \
	virtual void LoadAbilityData_Implementation(); \
 \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execCreateAIProperties); \
	DECLARE_FUNCTION(execExecuteLogic); \
	DECLARE_FUNCTION(execLoadAbilityData);


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_ACCESSORS
#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_CALLBACK_WRAPPERS
#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAT_BaseAbility(); \
	friend struct Z_Construct_UClass_UDAT_BaseAbility_Statics; \
public: \
	DECLARE_CLASS(UDAT_BaseAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DAT"), NO_API) \
	DECLARE_SERIALIZER(UDAT_BaseAbility)


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDAT_BaseAbility(); \
	friend struct Z_Construct_UClass_UDAT_BaseAbility_Statics; \
public: \
	DECLARE_CLASS(UDAT_BaseAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DAT"), NO_API) \
	DECLARE_SERIALIZER(UDAT_BaseAbility)


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAT_BaseAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAT_BaseAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAT_BaseAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAT_BaseAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDAT_BaseAbility(UDAT_BaseAbility&&); \
	NO_API UDAT_BaseAbility(const UDAT_BaseAbility&); \
public: \
	NO_API virtual ~UDAT_BaseAbility();


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAT_BaseAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDAT_BaseAbility(UDAT_BaseAbility&&); \
	NO_API UDAT_BaseAbility(const UDAT_BaseAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAT_BaseAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAT_BaseAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAT_BaseAbility) \
	NO_API virtual ~UDAT_BaseAbility();


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_13_PROLOG
#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_SPARSE_DATA \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_RPC_WRAPPERS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_ACCESSORS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_CALLBACK_WRAPPERS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_INCLASS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_SPARSE_DATA \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_ACCESSORS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_CALLBACK_WRAPPERS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAT_API UClass* StaticClass<class UDAT_BaseAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_BaseAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

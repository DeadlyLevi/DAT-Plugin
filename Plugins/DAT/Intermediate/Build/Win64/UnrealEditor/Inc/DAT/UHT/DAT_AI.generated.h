// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAT_AI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDAT_BaseAbility;
#ifdef DAT_DAT_AI_generated_h
#error "DAT_AI.generated.h already included, missing '#pragma once' in DAT_AI.h"
#endif
#define DAT_DAT_AI_generated_h

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_SPARSE_DATA
#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcquireAbility); \
	DECLARE_FUNCTION(execRequestAbilityExecution);


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcquireAbility); \
	DECLARE_FUNCTION(execRequestAbilityExecution);


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_ACCESSORS
#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADAT_AI(); \
	friend struct Z_Construct_UClass_ADAT_AI_Statics; \
public: \
	DECLARE_CLASS(ADAT_AI, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DAT"), NO_API) \
	DECLARE_SERIALIZER(ADAT_AI)


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADAT_AI(); \
	friend struct Z_Construct_UClass_ADAT_AI_Statics; \
public: \
	DECLARE_CLASS(ADAT_AI, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DAT"), NO_API) \
	DECLARE_SERIALIZER(ADAT_AI)


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADAT_AI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADAT_AI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADAT_AI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADAT_AI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADAT_AI(ADAT_AI&&); \
	NO_API ADAT_AI(const ADAT_AI&); \
public: \
	NO_API virtual ~ADAT_AI();


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADAT_AI(ADAT_AI&&); \
	NO_API ADAT_AI(const ADAT_AI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADAT_AI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADAT_AI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADAT_AI) \
	NO_API virtual ~ADAT_AI();


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_10_PROLOG
#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_SPARSE_DATA \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_RPC_WRAPPERS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_ACCESSORS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_INCLASS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_SPARSE_DATA \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_ACCESSORS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_INCLASS_NO_PURE_DECLS \
	FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAT_API UClass* StaticClass<class ADAT_AI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_AI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DAT_CustomStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAT_DAT_CustomStructs_generated_h
#error "DAT_CustomStructs.generated.h already included, missing '#pragma once' in DAT_CustomStructs.h"
#endif
#define DAT_DAT_CustomStructs_generated_h

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_Bool_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_Bool>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_Byte_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_Byte>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_Int_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_Int>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_Int64_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_Int64>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_Float_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_Float>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_FName_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_FName>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_FString_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_FString>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_FText_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_FText>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_FVector_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_FVector>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_FRotator_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_FRotator>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_235_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_FTransform_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_FTransform>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_254_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAT_AActor_Statics; \
	DAT_API static class UScriptStruct* StaticStruct();


template<> DAT_API UScriptStruct* StaticStruct<struct FDAT_AActor>();

#define FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDATAbilityStats_Statics; \
	DAT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DAT_API UScriptStruct* StaticStruct<struct FDATAbilityStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h


#define FOREACH_ENUM_EDATABILITYTYPE(op) \
	op(EDATAbilityType::None) \
	op(EDATAbilityType::Melee) \
	op(EDATAbilityType::Ranged) \
	op(EDATAbilityType::Magic) 

enum class EDATAbilityType : uint8;
template<> struct TIsUEnumClass<EDATAbilityType> { enum { Value = true }; };
template<> DAT_API UEnum* StaticEnum<EDATAbilityType>();

#define FOREACH_ENUM_EDATCONDITIONTYPE(op) \
	op(EDATConditionType::None) \
	op(EDATConditionType::DistanceToObject) \
	op(EDATConditionType::HealthThreshold) \
	op(EDATConditionType::Cooldown) 

enum class EDATConditionType : uint8;
template<> struct TIsUEnumClass<EDATConditionType> { enum { Value = true }; };
template<> DAT_API UEnum* StaticEnum<EDATConditionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

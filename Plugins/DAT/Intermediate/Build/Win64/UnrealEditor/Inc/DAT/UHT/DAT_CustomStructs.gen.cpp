// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAT/Public/DAT_CustomStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAT_CustomStructs() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DAT_API UEnum* Z_Construct_UEnum_DAT_EDATAbilityType();
	DAT_API UEnum* Z_Construct_UEnum_DAT_EDATConditionType();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_AActor();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_Bool();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_Byte();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_Float();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_FName();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_FRotator();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_FString();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_FText();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_FTransform();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_FVector();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_Int();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDAT_Int64();
	DAT_API UScriptStruct* Z_Construct_UScriptStruct_FDATAbilityStats();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DAT();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDATAbilityType;
	static UEnum* EDATAbilityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDATAbilityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDATAbilityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAT_EDATAbilityType, Z_Construct_UPackage__Script_DAT(), TEXT("EDATAbilityType"));
		}
		return Z_Registration_Info_UEnum_EDATAbilityType.OuterSingleton;
	}
	template<> DAT_API UEnum* StaticEnum<EDATAbilityType>()
	{
		return EDATAbilityType_StaticEnum();
	}
	struct Z_Construct_UEnum_DAT_EDATAbilityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DAT_EDATAbilityType_Statics::Enumerators[] = {
		{ "EDATAbilityType::None", (int64)EDATAbilityType::None },
		{ "EDATAbilityType::Melee", (int64)EDATAbilityType::Melee },
		{ "EDATAbilityType::Ranged", (int64)EDATAbilityType::Ranged },
		{ "EDATAbilityType::Magic", (int64)EDATAbilityType::Magic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DAT_EDATAbilityType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* ENUM CLASSES */" },
		{ "Magic.DisplayName", "Magic Ability" },
		{ "Magic.Name", "EDATAbilityType::Magic" },
		{ "Melee.Comment", "// Placeholder for no ability type\n" },
		{ "Melee.DisplayName", "Melee Ability" },
		{ "Melee.Name", "EDATAbilityType::Melee" },
		{ "Melee.ToolTip", "Placeholder for no ability type" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDATAbilityType::None" },
		{ "Ranged.DisplayName", "Ranged Ability" },
		{ "Ranged.Name", "EDATAbilityType::Ranged" },
		{ "ToolTip", "ENUM CLASSES" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAT_EDATAbilityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		"EDATAbilityType",
		"EDATAbilityType",
		Z_Construct_UEnum_DAT_EDATAbilityType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DAT_EDATAbilityType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DAT_EDATAbilityType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DAT_EDATAbilityType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DAT_EDATAbilityType()
	{
		if (!Z_Registration_Info_UEnum_EDATAbilityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDATAbilityType.InnerSingleton, Z_Construct_UEnum_DAT_EDATAbilityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDATAbilityType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDATConditionType;
	static UEnum* EDATConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDATConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDATConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAT_EDATConditionType, Z_Construct_UPackage__Script_DAT(), TEXT("EDATConditionType"));
		}
		return Z_Registration_Info_UEnum_EDATConditionType.OuterSingleton;
	}
	template<> DAT_API UEnum* StaticEnum<EDATConditionType>()
	{
		return EDATConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_DAT_EDATConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DAT_EDATConditionType_Statics::Enumerators[] = {
		{ "EDATConditionType::None", (int64)EDATConditionType::None },
		{ "EDATConditionType::DistanceToObject", (int64)EDATConditionType::DistanceToObject },
		{ "EDATConditionType::HealthThreshold", (int64)EDATConditionType::HealthThreshold },
		{ "EDATConditionType::Cooldown", (int64)EDATConditionType::Cooldown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DAT_EDATConditionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cooldown.DisplayName", "Cooldown" },
		{ "Cooldown.Name", "EDATConditionType::Cooldown" },
		{ "DistanceToObject.Comment", "// Placeholder for no condition\n" },
		{ "DistanceToObject.DisplayName", "Distance To Object" },
		{ "DistanceToObject.Name", "EDATConditionType::DistanceToObject" },
		{ "DistanceToObject.ToolTip", "Placeholder for no condition" },
		{ "HealthThreshold.DisplayName", "Health Threshold" },
		{ "HealthThreshold.Name", "EDATConditionType::HealthThreshold" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDATConditionType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAT_EDATConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		"EDATConditionType",
		"EDATConditionType",
		Z_Construct_UEnum_DAT_EDATConditionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DAT_EDATConditionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DAT_EDATConditionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DAT_EDATConditionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DAT_EDATConditionType()
	{
		if (!Z_Registration_Info_UEnum_EDATConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDATConditionType.InnerSingleton, Z_Construct_UEnum_DAT_EDATConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDATConditionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_Bool;
class UScriptStruct* FDAT_Bool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_Bool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_Bool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_Bool, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_Bool"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_Bool.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_Bool>()
{
	return FDAT_Bool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_Bool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Bool_MetaData[];
#endif
		static void NewProp__Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Bool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// BOOL\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "BOOL" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_Bool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp__Bool_MetaData[] = {
		{ "Category", "DAT_Bool" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp__Bool_SetBit(void* Obj)
	{
		((FDAT_Bool*)Obj)->_Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp__Bool = { "_Bool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDAT_Bool), &Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp__Bool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp__Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp__Bool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_Bool" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Bool, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_Bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp__Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_Bool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_Bool",
		sizeof(FDAT_Bool),
		alignof(FDAT_Bool),
		Z_Construct_UScriptStruct_FDAT_Bool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Bool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Bool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Bool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_Bool()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_Bool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_Bool.InnerSingleton, Z_Construct_UScriptStruct_FDAT_Bool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_Bool.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_Byte;
class UScriptStruct* FDAT_Byte::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_Byte.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_Byte.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_Byte, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_Byte"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_Byte.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_Byte>()
{
	return FDAT_Byte::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_Byte_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Byte_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Byte;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Byte_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// BYTE\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "BYTE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_Byte>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_Byte_MetaData[] = {
		{ "Category", "DAT_Byte" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_Byte = { "Byte", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Byte, Byte), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_Byte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_Byte_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_Byte" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Byte, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_Byte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_Byte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_Byte_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_Byte",
		sizeof(FDAT_Byte),
		alignof(FDAT_Byte),
		Z_Construct_UScriptStruct_FDAT_Byte_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Byte_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Byte_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Byte_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_Byte()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_Byte.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_Byte.InnerSingleton, Z_Construct_UScriptStruct_FDAT_Byte_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_Byte.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_Int;
class UScriptStruct* FDAT_Int::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_Int.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_Int.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_Int, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_Int"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_Int.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_Int>()
{
	return FDAT_Int::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_Int_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Int;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Int_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// INT\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "INT" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_Int_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_Int>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_Int_MetaData[] = {
		{ "Category", "DAT_Int" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Int, Int), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_Int_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_Int_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_Int" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Int, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_Int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Int_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_Int_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_Int",
		sizeof(FDAT_Int),
		alignof(FDAT_Int),
		Z_Construct_UScriptStruct_FDAT_Int_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Int_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_Int()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_Int.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_Int.InnerSingleton, Z_Construct_UScriptStruct_FDAT_Int_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_Int.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_Int64;
class UScriptStruct* FDAT_Int64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_Int64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_Int64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_Int64, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_Int64"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_Int64.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_Int64>()
{
	return FDAT_Int64::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_Int64_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Int64_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// INT64\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "INT64" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_Int64>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_Int64_MetaData[] = {
		{ "Category", "DAT_Int64" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Int64, Int64), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_Int64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_Int64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_Int64" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Int64, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_Int64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_Int64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_Int64_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_Int64",
		sizeof(FDAT_Int64),
		alignof(FDAT_Int64),
		Z_Construct_UScriptStruct_FDAT_Int64_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int64_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Int64_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Int64_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_Int64()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_Int64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_Int64.InnerSingleton, Z_Construct_UScriptStruct_FDAT_Int64_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_Int64.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_Float;
class UScriptStruct* FDAT_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_Float, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_Float"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_Float.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_Float>()
{
	return FDAT_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_Float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Float_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FLOAT\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "FLOAT" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_Float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "DAT_Float" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Float, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_Float" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_Float, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_Float_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_Float",
		sizeof(FDAT_Float),
		alignof(FDAT_Float),
		Z_Construct_UScriptStruct_FDAT_Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Float_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_Float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_Float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_Float.InnerSingleton, Z_Construct_UScriptStruct_FDAT_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_Float.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_FName;
class UScriptStruct* FDAT_FName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_FName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_FName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_FName, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_FName"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_FName.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_FName>()
{
	return FDAT_FName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_FName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FNAME\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "FNAME" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_FName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_FName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DAT_FName" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_FName" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FName, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_FName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FName_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_FName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_FName",
		sizeof(FDAT_FName),
		alignof(FDAT_FName),
		Z_Construct_UScriptStruct_FDAT_FName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_FName()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_FName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_FName.InnerSingleton, Z_Construct_UScriptStruct_FDAT_FName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_FName.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_FString;
class UScriptStruct* FDAT_FString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_FString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_FString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_FString, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_FString"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_FString.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_FString>()
{
	return FDAT_FString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_FString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FSTRING\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "FSTRING" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_FString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_FString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_String_MetaData[] = {
		{ "Category", "DAT_FString" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FString, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_FString" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FString, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_FString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FString_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_FString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_FString",
		sizeof(FDAT_FString),
		alignof(FDAT_FString),
		Z_Construct_UScriptStruct_FDAT_FString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_FString()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_FString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_FString.InnerSingleton, Z_Construct_UScriptStruct_FDAT_FString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_FString.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_FText;
class UScriptStruct* FDAT_FText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_FText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_FText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_FText, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_FText"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_FText.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_FText>()
{
	return FDAT_FText::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_FText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FTEXT\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "FTEXT" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_FText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_FText>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "DAT_FText" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FText, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_FText" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FText, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_FText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FText_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_FText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_FText",
		sizeof(FDAT_FText),
		alignof(FDAT_FText),
		Z_Construct_UScriptStruct_FDAT_FText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_FText()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_FText.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_FText.InnerSingleton, Z_Construct_UScriptStruct_FDAT_FText_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_FText.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_FVector;
class UScriptStruct* FDAT_FVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_FVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_FVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_FVector, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_FVector"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_FVector.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_FVector>()
{
	return FDAT_FVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_FVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FVECTOR\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "FVECTOR" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_FVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "DAT_FVector" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_FVector" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FVector, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_FVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_FVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_FVector",
		sizeof(FDAT_FVector),
		alignof(FDAT_FVector),
		Z_Construct_UScriptStruct_FDAT_FVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_FVector()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_FVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_FVector.InnerSingleton, Z_Construct_UScriptStruct_FDAT_FVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_FVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_FRotator;
class UScriptStruct* FDAT_FRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_FRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_FRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_FRotator, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_FRotator"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_FRotator.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_FRotator>()
{
	return FDAT_FRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_FRotator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FROTATOR\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "FROTATOR" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_FRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "DAT_FRotator" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_FRotator" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FRotator, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_FRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_FRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_FRotator",
		sizeof(FDAT_FRotator),
		alignof(FDAT_FRotator),
		Z_Construct_UScriptStruct_FDAT_FRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_FRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_FRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_FRotator.InnerSingleton, Z_Construct_UScriptStruct_FDAT_FRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_FRotator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_FTransform;
class UScriptStruct* FDAT_FTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_FTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_FTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_FTransform, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_FTransform"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_FTransform.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_FTransform>()
{
	return FDAT_FTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_FTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FTRANFORM\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "FTRANFORM" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_FTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "DAT_FTransform" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_FTransform" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_FTransform, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_FTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_FTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_FTransform",
		sizeof(FDAT_FTransform),
		alignof(FDAT_FTransform),
		Z_Construct_UScriptStruct_FDAT_FTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_FTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_FTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_FTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_FTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_FTransform.InnerSingleton, Z_Construct_UScriptStruct_FDAT_FTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_FTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAT_AActor;
class UScriptStruct* FDAT_AActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAT_AActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAT_AActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAT_AActor, Z_Construct_UPackage__Script_DAT(), TEXT("DAT_AActor"));
	}
	return Z_Registration_Info_UScriptStruct_DAT_AActor.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDAT_AActor>()
{
	return FDAT_AActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAT_AActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_AActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// AACTOR\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "AACTOR" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAT_AActor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "DAT_AActor" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_AActor, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "DAT_AActor" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDAT_AActor, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_VarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAT_AActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewProp_VarName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAT_AActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		nullptr,
		&NewStructOps,
		"DAT_AActor",
		sizeof(FDAT_AActor),
		alignof(FDAT_AActor),
		Z_Construct_UScriptStruct_FDAT_AActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_AActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAT_AActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAT_AActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAT_AActor()
	{
		if (!Z_Registration_Info_UScriptStruct_DAT_AActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAT_AActor.InnerSingleton, Z_Construct_UScriptStruct_FDAT_AActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAT_AActor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDATAbilityStats>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDATAbilityStats cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DATAbilityStats;
class UScriptStruct* FDATAbilityStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DATAbilityStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DATAbilityStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDATAbilityStats, Z_Construct_UPackage__Script_DAT(), TEXT("DATAbilityStats"));
	}
	return Z_Registration_Info_UScriptStruct_DATAbilityStats.OuterSingleton;
}
template<> DAT_API UScriptStruct* StaticStruct<FDATAbilityStats>()
{
	return FDATAbilityStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDATAbilityStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ByteData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Int64Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int64Data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FNameData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FNameData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FNameData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FStringData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FStringData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FStringData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FTextData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FTextData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FTextData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FVectorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FVectorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FVectorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FRotatorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FRotatorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FRotatorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FTransformData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FTransformData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FTransformData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AActorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AActorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AActorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* ////////////////// */// this are the deta each ability will have access to setup it's values, conditions and data\n" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "////////////////// // this are the deta each ability will have access to setup it's values, conditions and data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDATAbilityStats>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_BoolData_Inner = { "BoolData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_Bool, METADATA_PARAMS(nullptr, 0) }; // 4190311285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_BoolData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "Comment", "/*  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Conditions\")\n        EDATAbilityType AbilityType;\n\n    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Conditions\")\n        EDATConditionType ConditionType;\n    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Conditions\")\n        float ConditionValue;*/" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Conditions\")\n      EDATAbilityType AbilityType;\n\n  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Conditions\")\n      EDATConditionType ConditionType;\n  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Conditions\")\n      float ConditionValue;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_BoolData = { "BoolData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, BoolData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_BoolData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_BoolData_MetaData)) }; // 4190311285
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_Byte, METADATA_PARAMS(nullptr, 0) }; // 1068820840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_ByteData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_ByteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_ByteData_MetaData)) }; // 1068820840
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_IntData_Inner = { "IntData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_Int, METADATA_PARAMS(nullptr, 0) }; // 2948159524
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_IntData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_IntData = { "IntData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, IntData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_IntData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_IntData_MetaData)) }; // 2948159524
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_Int64Data_Inner = { "Int64Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_Int64, METADATA_PARAMS(nullptr, 0) }; // 1129283632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_Int64Data_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_Int64Data = { "Int64Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, Int64Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_Int64Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_Int64Data_MetaData)) }; // 1129283632
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_Float, METADATA_PARAMS(nullptr, 0) }; // 692245875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FloatData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, FloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FloatData_MetaData)) }; // 692245875
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FNameData_Inner = { "FNameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_FName, METADATA_PARAMS(nullptr, 0) }; // 1667598819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FNameData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FNameData = { "FNameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, FNameData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FNameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FNameData_MetaData)) }; // 1667598819
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FStringData_Inner = { "FStringData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_FString, METADATA_PARAMS(nullptr, 0) }; // 2151383080
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FStringData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FStringData = { "FStringData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, FStringData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FStringData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FStringData_MetaData)) }; // 2151383080
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTextData_Inner = { "FTextData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_FText, METADATA_PARAMS(nullptr, 0) }; // 813883005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTextData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTextData = { "FTextData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, FTextData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTextData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTextData_MetaData)) }; // 813883005
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FVectorData_Inner = { "FVectorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_FVector, METADATA_PARAMS(nullptr, 0) }; // 821670856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FVectorData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FVectorData = { "FVectorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, FVectorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FVectorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FVectorData_MetaData)) }; // 821670856
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FRotatorData_Inner = { "FRotatorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_FRotator, METADATA_PARAMS(nullptr, 0) }; // 3947640358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FRotatorData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FRotatorData = { "FRotatorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, FRotatorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FRotatorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FRotatorData_MetaData)) }; // 3947640358
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTransformData_Inner = { "FTransformData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_FTransform, METADATA_PARAMS(nullptr, 0) }; // 2825226162
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTransformData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTransformData = { "FTransformData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, FTransformData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTransformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTransformData_MetaData)) }; // 2825226162
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_AActorData_Inner = { "AActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDAT_AActor, METADATA_PARAMS(nullptr, 0) }; // 4159276076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_AActorData_MetaData[] = {
		{ "Category", "DATAbilityStats" },
		{ "ModuleRelativePath", "Public/DAT_CustomStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_AActorData = { "AActorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDATAbilityStats, AActorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_AActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_AActorData_MetaData)) }; // 4159276076
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDATAbilityStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_BoolData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_BoolData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_ByteData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_ByteData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_IntData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_IntData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_Int64Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_Int64Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FloatData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FNameData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FNameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FStringData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FStringData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTextData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTextData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FVectorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FVectorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FRotatorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FRotatorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTransformData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_FTransformData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_AActorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewProp_AActorData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDATAbilityStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DAT,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DATAbilityStats",
		sizeof(FDATAbilityStats),
		alignof(FDATAbilityStats),
		Z_Construct_UScriptStruct_FDATAbilityStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDATAbilityStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDATAbilityStats()
	{
		if (!Z_Registration_Info_UScriptStruct_DATAbilityStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DATAbilityStats.InnerSingleton, Z_Construct_UScriptStruct_FDATAbilityStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DATAbilityStats.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_Statics::EnumInfo[] = {
		{ EDATAbilityType_StaticEnum, TEXT("EDATAbilityType"), &Z_Registration_Info_UEnum_EDATAbilityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 648827337U) },
		{ EDATConditionType_StaticEnum, TEXT("EDATConditionType"), &Z_Registration_Info_UEnum_EDATConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3834727707U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_Statics::ScriptStructInfo[] = {
		{ FDAT_Bool::StaticStruct, Z_Construct_UScriptStruct_FDAT_Bool_Statics::NewStructOps, TEXT("DAT_Bool"), &Z_Registration_Info_UScriptStruct_DAT_Bool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_Bool), 4190311285U) },
		{ FDAT_Byte::StaticStruct, Z_Construct_UScriptStruct_FDAT_Byte_Statics::NewStructOps, TEXT("DAT_Byte"), &Z_Registration_Info_UScriptStruct_DAT_Byte, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_Byte), 1068820840U) },
		{ FDAT_Int::StaticStruct, Z_Construct_UScriptStruct_FDAT_Int_Statics::NewStructOps, TEXT("DAT_Int"), &Z_Registration_Info_UScriptStruct_DAT_Int, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_Int), 2948159524U) },
		{ FDAT_Int64::StaticStruct, Z_Construct_UScriptStruct_FDAT_Int64_Statics::NewStructOps, TEXT("DAT_Int64"), &Z_Registration_Info_UScriptStruct_DAT_Int64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_Int64), 1129283632U) },
		{ FDAT_Float::StaticStruct, Z_Construct_UScriptStruct_FDAT_Float_Statics::NewStructOps, TEXT("DAT_Float"), &Z_Registration_Info_UScriptStruct_DAT_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_Float), 692245875U) },
		{ FDAT_FName::StaticStruct, Z_Construct_UScriptStruct_FDAT_FName_Statics::NewStructOps, TEXT("DAT_FName"), &Z_Registration_Info_UScriptStruct_DAT_FName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_FName), 1667598819U) },
		{ FDAT_FString::StaticStruct, Z_Construct_UScriptStruct_FDAT_FString_Statics::NewStructOps, TEXT("DAT_FString"), &Z_Registration_Info_UScriptStruct_DAT_FString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_FString), 2151383080U) },
		{ FDAT_FText::StaticStruct, Z_Construct_UScriptStruct_FDAT_FText_Statics::NewStructOps, TEXT("DAT_FText"), &Z_Registration_Info_UScriptStruct_DAT_FText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_FText), 813883005U) },
		{ FDAT_FVector::StaticStruct, Z_Construct_UScriptStruct_FDAT_FVector_Statics::NewStructOps, TEXT("DAT_FVector"), &Z_Registration_Info_UScriptStruct_DAT_FVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_FVector), 821670856U) },
		{ FDAT_FRotator::StaticStruct, Z_Construct_UScriptStruct_FDAT_FRotator_Statics::NewStructOps, TEXT("DAT_FRotator"), &Z_Registration_Info_UScriptStruct_DAT_FRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_FRotator), 3947640358U) },
		{ FDAT_FTransform::StaticStruct, Z_Construct_UScriptStruct_FDAT_FTransform_Statics::NewStructOps, TEXT("DAT_FTransform"), &Z_Registration_Info_UScriptStruct_DAT_FTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_FTransform), 2825226162U) },
		{ FDAT_AActor::StaticStruct, Z_Construct_UScriptStruct_FDAT_AActor_Statics::NewStructOps, TEXT("DAT_AActor"), &Z_Registration_Info_UScriptStruct_DAT_AActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAT_AActor), 4159276076U) },
		{ FDATAbilityStats::StaticStruct, Z_Construct_UScriptStruct_FDATAbilityStats_Statics::NewStructOps, TEXT("DATAbilityStats"), &Z_Registration_Info_UScriptStruct_DATAbilityStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDATAbilityStats), 2632433345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_161516904(TEXT("/Script/DAT"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DAT_PROJECT_Plugins_DAT_Source_DAT_Public_DAT_CustomStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

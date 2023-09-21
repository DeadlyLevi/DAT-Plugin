// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/DataTable.h"
#include "DAT_CustomStructs.generated.h"

/* ENUM CLASSES */

UENUM(BlueprintType)
enum class EDATAbilityType : uint8
{
    None UMETA(DisplayName = "None"), // Placeholder for no ability type
    Melee UMETA(DisplayName = "Melee Ability"),
    Ranged UMETA(DisplayName = "Ranged Ability"),
    Magic UMETA(DisplayName = "Magic Ability"),
    // Add more ability types as needed
};

UENUM(BlueprintType)
enum class EDATConditionType : uint8
{
    None UMETA(DisplayName = "None"), // Placeholder for no condition
    DistanceToObject UMETA(DisplayName = "Distance To Object"),
    HealthThreshold UMETA(DisplayName = "Health Threshold"),
    Cooldown UMETA(DisplayName = "Cooldown"),
    // Add more conditions as needed
};

/* ////////////////// */

#pragma region DAT_Properties

// BOOL
USTRUCT(BlueprintType)
struct FDAT_Bool
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool _Bool;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_Bool() { NULL, ""; };

    FDAT_Bool(bool BOOL, FString newString)
    {
        _Bool = BOOL;
        VarName = newString;
    }
};


// BYTE
USTRUCT(BlueprintType)
struct FDAT_Byte
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        uint8 Byte;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_Byte() { NULL, ""; };

    FDAT_Byte(uint8 BYTE, FString newString)
    {
        Byte = BYTE;
        VarName = newString;
    }

};

// INT
USTRUCT(BlueprintType)
struct FDAT_Int
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int Int;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_Int() { NULL, ""; };

    FDAT_Int(int INT, FString newString)
    {
        Int = INT;
        VarName = newString;
    }
};

// INT64
USTRUCT(BlueprintType)
struct FDAT_Int64
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int64 Int64;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_Int64() { NULL, ""; };

    FDAT_Int64(int64 INT64, FString newString)
    {
        Int64 = INT64;
        VarName = newString;
    }
};

// FLOAT
USTRUCT(BlueprintType)
struct FDAT_Float
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Float;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_Float() { NULL, ""; };

    FDAT_Float(float FLOAT, FString newString)
    {
        Float = FLOAT;
        VarName = newString;
    }
};

// FNAME
USTRUCT(BlueprintType)
struct FDAT_FName
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FName Name;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_FName() { NULL, ""; };

    FDAT_FName(FName FNAME, FString newString)
    {
        Name = FNAME;
        VarName = newString;
    }
};

// FSTRING
USTRUCT(BlueprintType)
struct FDAT_FString
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString String;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_FString() { NULL, ""; };

    FDAT_FString(FString FSTRING, FString newString)
    {
        String = FSTRING;
        VarName = newString;
    }
};

// FTEXT
USTRUCT(BlueprintType)
struct FDAT_FText
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FText Text;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_FText() { NULL, ""; };

    FDAT_FText(FText FTEXT, FString newString)
    {
        Text = FTEXT;
        VarName = newString;
    }
};

// FVECTOR
USTRUCT(BlueprintType)
struct FDAT_FVector
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FVector Vector;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_FVector() { NULL, ""; };

    FDAT_FVector(FVector FVECTOR, FString newString)
    {
        Vector = FVECTOR;
        VarName = newString;
    }
};

// FROTATOR
USTRUCT(BlueprintType)
struct FDAT_FRotator
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FRotator Rotator;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_FRotator() { NULL, ""; };

    FDAT_FRotator(FRotator FROTATOR, FString newString)
    {
        Rotator = FROTATOR;
        VarName = newString;
    }
};

// FTRANFORM
USTRUCT(BlueprintType)
struct FDAT_FTransform
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FTransform Transform;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_FTransform() { NULL, ""; };

    FDAT_FTransform(FTransform FTRANFORM, FString newString)
    {
        Transform = FTRANFORM;
        VarName = newString;
    }
};

// AACTOR
USTRUCT(BlueprintType)
struct FDAT_AActor
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        AActor* Actor;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString VarName;

    FDAT_AActor() { NULL, ""; };

    FDAT_AActor(AActor AACTOR, FString newString)
    {
        Actor = &AACTOR;
        VarName = newString;
    }
};


#pragma endregion

/* ////////////////// */

// this are the deta each ability will have access to setup it's values, conditions and data
USTRUCT(BlueprintType)
struct FDATAbilityStats : public FTableRowBase
{

    GENERATED_BODY()

    //FDATAbilitySetup();

  /*  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Conditions")
        EDATAbilityType AbilityType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Conditions")
        EDATConditionType ConditionType;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Conditions")
        float ConditionValue;*/
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_Bool> BoolData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_Byte> ByteData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_Int> IntData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_Int64> Int64Data;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_Float> FloatData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_FName> FNameData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_FString> FStringData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_FText> FTextData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_FVector> FVectorData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_FRotator> FRotatorData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_FTransform> FTransformData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FDAT_AActor> AActorData;
};

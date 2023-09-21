// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DAT_AI.h"
#include "DAT_BaseAbility.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DAT_API UDAT_BaseAbility : public UObject
{
	GENERATED_BODY()
	
public:

UFUNCTION(BlueprintNativeEvent) // Load data from BP to C++.
    void LoadAbilityData();

UFUNCTION(BlueprintNativeEvent) // Execute all the logic of the ability.
    void ExecuteLogic(const ADAT_AI* AIref, FDATAbilityStats AIAbilityStats);

    
UFUNCTION(BlueprintCallable, Category = "Abilities") // Create Properties on the AI that uses this Ability and add the default values on them.
    virtual void CreateAIProperties(); 
  
UFUNCTION(BlueprintCallable, Category = "Abilities") // Get the priority of the ability.
    int32 GetPriority() const { return Priority; }
    

protected:

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General")
    int32 Priority;

public:

UPROPERTY(BlueprintReadWrite, Category = "Abilities") // Ability Data Struct.
    FDATAbilityStats abilityStats;

};

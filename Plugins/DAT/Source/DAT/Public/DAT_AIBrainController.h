// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DAT_AIBrainController.generated.h"

/**
 * 
 */
UCLASS()
class DAT_API ADAT_AIBrainController : public AAIController
{
	GENERATED_BODY()
	
public:
    ADAT_AIBrainController();

    //// Dynamic List of abilities from content folder
    //UPROPERTY(BlueprintReadWrite)
    //    UDAT_BaseAbility* abili;

    // Execute requested ability
    UFUNCTION(BlueprintCallable, Category = "Abilities")
        void ExecuteAbility(ADAT_AI* RequestingAI, UDAT_BaseAbility* AbilityToExecute);
};

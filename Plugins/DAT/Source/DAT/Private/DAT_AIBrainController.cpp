// Fill out your copyright notice in the Description page of Project Settings.


#include "DAT_AIBrainController.h"
#include "DAT_BaseAbility.h"
#include "DAT_AI.h"

ADAT_AIBrainController::ADAT_AIBrainController()
{
    // Default constructor logic here.
}

void ADAT_AIBrainController::ExecuteAbility(ADAT_AI* RequestingAI, UDAT_BaseAbility* AbilityToExecute)
{
    if (AbilityToExecute)
    {
        // Execute ability logic here (e.g., print ability name).
        FString AbilityName = AbilityToExecute->GetName();
        UE_LOG(LogTemp, Warning, TEXT("%s executed %s"), *RequestingAI->GetName(), *AbilityName);
    }
}
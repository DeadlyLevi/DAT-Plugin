#include "DAT_BaseAbility.h"
#include "Kismet/GameplayStatics.h"

// Create all properties needed on DAT_AI BP based on abilityStats saved data.
void UDAT_BaseAbility::CreateAIProperties()
{
	FDAT_Bool mybool = FDAT_Bool(true, "lol");
	abilityStats.BoolData.Add(mybool);
	FString lol = abilityStats.BoolData[0].VarName;
}


// Loads all deafults values for properties needed for this ability.
void UDAT_BaseAbility::LoadAbilityData_Implementation()
{

}

// Executes the ability logic from blueprint / C++. You can write it in both ways.
void UDAT_BaseAbility::ExecuteLogic_Implementation(const ADAT_AI* AIref, FDATAbilityStats AIAbilityStats)
{
	//Ability Logic C++
}
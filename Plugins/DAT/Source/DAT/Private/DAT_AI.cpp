// Fill out your copyright notice in the Description page of Project Settings.

#include "DAT_AI.h"	
#include "DAT_BaseAbility.h"
#include "DAT_AIBrainController.h"

// Sets default values
ADAT_AI::ADAT_AI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADAT_AI::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ADAT_AI::Tick(float DeltaTime)
{
	/*Super::Tick(DeltaTime);
    for (TSubclassOf<UDAT_BaseAbility> A : Abilities)
    {
        RequestAbilityExecution(A);
    }*/

}

void ADAT_AI::PostRegisterAllComponents()
{
    Super::PostRegisterAllComponents();

    LoadAllProperties();
}

#if WITH_EDITOR
void ADAT_AI::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);
    const FString Name = PropertyChangedEvent.Property->GetName();
    if (Name == TEXT("Abilities"))
    {
        LoadAllProperties();
    }
}
#endif

void ADAT_AI::LoadAllProperties()
{
    //for each ability in list and it's property create a property struct underneath

    UE_LOG(LogTemp, Warning, TEXT("Properties Have Been Loaded!"));

    // Create an Instanced property
    //UPROPERTY(EditAnywhere, Instanced, Category = "Dynamic Properties")
    //    FDAT_Bool* DynamicProperty = NewObject<FDAT_Bool>(this);

    //// Initialize the property if needed
    //if (DynamicProperty)
    //{
    //    DynamicProperty = new FDAT_Bool(true, "lol"); // You can implement this function in UYourDynamicProperty
    //}

    // Add the property to an array or list to keep track of it
    // DynamicProperties.Add(DynamicProperty);
}

void ADAT_AI::RequestAbilityExecution(TSubclassOf<UDAT_BaseAbility> AbilityToExecute)
{
    // Sort abilities by priority
   /* Abilities.Sort([](const UDAT_BaseAbility& A, const UDAT_BaseAbility& B) {
        return A.GetPriority() > B.GetPriority();
        });*/

    UDAT_BaseAbility* AbilityInstance = Cast<UDAT_BaseAbility>(AbilityToExecute.GetDefaultObject());
    if (AbilityInstance)
    {
        //AbilityInstance->DAT_AbilityBeginPlay(this);
    }
    // Execute abilities in order
    //for (UDAT_BaseAbility* Ability : Abilities)
    //{
    //    if (Ability->CanExecuteAbility(this))
    //    {
    //        Ability->ExecuteAbility(this);
    //        // Optionally, break out of the loop if you want to execute only one ability per frame.
    //    }
    //}
}

void ADAT_AI::AcquireAbility(TSubclassOf<UDAT_BaseAbility> AbilityToAdd)
{
 /*   if (AbilityToAdd)
    {
        Abilities.Add(AbilityToAdd);
    }*/
}

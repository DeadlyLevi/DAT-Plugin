// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DAT_CustomStructs.h"
#include "DAT_AI.generated.h"

UCLASS()
class DAT_API ADAT_AI : public ACharacter
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void PostRegisterAllComponents() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	void LoadAllProperties();

public:
	// Sets default values for this character's properties
	ADAT_AI();

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void RequestAbilityExecution(TSubclassOf<UDAT_BaseAbility> AbilityToExecute);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void AcquireAbility(TSubclassOf<UDAT_BaseAbility> AbilityToAdd);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		TArray<TSubclassOf<UDAT_BaseAbility>> Abilities;

public:	

};

//QUANDO CAMBIANO I VALORI DA DETAIL PANEL CHIAMA UNA FUNZIONE DI AGGIORNAMENTO EDITOR
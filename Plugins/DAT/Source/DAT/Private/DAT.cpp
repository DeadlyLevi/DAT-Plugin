// Copyright Epic Games, Inc. All Rights Reserved.

#include "DAT.h"
#include "AssetToolsModule.h"
#include "AssetRegistry/AssetRegistryModule.h"

#include "Modules/ModuleManager.h"
#include "DAT_BaseAbility.h"
#include "DAT_AbilityDetails.h"
#include "PropertyEditorModule.h"

#define LOCTEXT_NAMESPACE "FDATModule"

void FDATModule::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("AIAbilitiesPlugin module has started!"));
    // Register custom class layout for UDAT_BaseAbility
    FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
    PropertyModule.RegisterCustomClassLayout(
        UDAT_BaseAbility::StaticClass()->GetFName(),
        FOnGetDetailCustomizationInstance::CreateStatic(&FDAT_AbilityDetails::MakeInstance)
    );
}

void FDATModule::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("AIAbilitiesPlugin module has shut down!"));
    // Unregister your custom details panel when the module is unloaded
    FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
    PropertyModule.UnregisterCustomClassLayout(UDAT_BaseAbility::StaticClass()->GetFName());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDATModule, DAT)
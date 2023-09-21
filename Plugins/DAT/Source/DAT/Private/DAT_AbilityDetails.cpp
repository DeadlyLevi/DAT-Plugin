// Fill out your copyright notice in the Description page of Project Settings.


#include "DAT_AbilityDetails.h"
#include "Widgets/Input/SEditableText.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"

TSharedRef<IDetailCustomization> FDAT_AbilityDetails::MakeInstance()
{
    return MakeShareable(new FDAT_AbilityDetails);
}

void FDAT_AbilityDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
    // Get the selected UDAT_BaseAbility instances
    TArray<TWeakObjectPtr<UObject>> SelectedObjects;
    DetailBuilder.GetObjectsBeingCustomized(SelectedObjects);

    // Create a category for your custom properties
    IDetailCategoryBuilder& MyCategory = DetailBuilder.EditCategory("MyCategoryName", FText::GetEmpty(), ECategoryPriority::Important);

    // Add your custom property widgets here using MyCategory.AddCustomRow
    // Example:
    MyCategory.AddCustomRow(FText::FromString("My Custom Property"))
        .NameContent()
        [
            SNew(STextBlock)
            .Text(FText::FromString("My Custom Property"))
        ]
    .ValueContent()
        [
            SNew(SEditableText)
            .Text(FText::FromString("Edit this property"))
        ];
}

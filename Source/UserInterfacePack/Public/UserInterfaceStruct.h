#pragma once

#include "CoreMinimal.h"
#include "UserInterfaceStruct.generated.h"

USTRUCT(BlueprintType)
struct FTableRowColorData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Table Row Color")
	FSlateColor Active;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Table Row Color")
	FSlateColor ActiveHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Table Row Color")
	FSlateColor Inactive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Table Row Color")
	FSlateColor InactiveHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Table Row Color")
	FSlateColor EvenRowHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Box Style")
	FSlateColor OddRowHovered;
};

USTRUCT(BlueprintType)
struct FComboBoxColorData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Box Color")
	FSlateColor Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Box Color")
	FSlateColor Hovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Box Color")
	FSlateColor Pressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Box Color")
	FSlateColor DownArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Box Color")
	FSlateColor MenuBorder;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Box Color")
	FTableRowColorData ItemColor;
};
// Gradess Games. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UserInterfaceStructs.h"
#include "UserInterfaceHelper.generated.h"

class USizeBox;
class UBorder;
class UComboBoxString;
/**
 * UserInterfacePack helper
 */
UCLASS()
class USERINTERFACEPACK_API UUserInterfaceHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "UI Helper | Style")
	static void SetTint(
		UPARAM(ref) FSlateBrush& SlateBrush,
		FSlateColor Color
	);

	UFUNCTION(BlueprintCallable, Category = "UI Helper | Style")
	static void SetButtonTint(
		UPARAM(ref) FButtonStyle& ButtonStyle,
		FButtonColorData ColorData
	);

	UFUNCTION(
		BlueprintCallable,
		Category = "UI Helper | Style",
		meta = (HidePin = "OwnerWidget", DefaultToSelf = "OwnerWidget")
	)
	static void SetComboBoxTintWidget(
		UUserWidget* OwnerWidget,
		UComboBoxString* ComboBox,
		FComboBoxColorData ColorData
	);

	UFUNCTION(
		BlueprintCallable,
		Category = "UI Helper | Style",
		meta = (HidePin = "OwnerWidget", DefaultToSelf = "OwnerWidget")
	)
	static void SetComboBoxTint(
		UUserWidget* OwnerWidget,
		UPARAM(ref) FComboButtonStyle& ComboButtonStyle,
		FTableRowStyle& ItemStyle,
		FComboBoxColorData ColorData
	);

	UFUNCTION(BlueprintCallable, Category = "UI Helper | Style")
    static void SetBorderTintWidget(UBorder* Border, FSlateColor Color);

	UFUNCTION(BlueprintCallable, Category = "UI Helper | Size box")
	static void SetSize(USizeBox* SizeBox, float Width, float Height);
};

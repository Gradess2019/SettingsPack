// Gradess Games. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UserInterfaceStructs.h"
#include "UserInterfaceHelper.generated.h"

class USizeBox;
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
		FButtonColorData Data
	);

	UFUNCTION(BlueprintCallable, Category = "UI Helper | Style")
	static void SetComboBoxTintWidget(
		UComboBoxString* ComboBox,
		FComboBoxColorData Data
	);
	
	UFUNCTION(BlueprintCallable, Category = "UI Helper | Style")
	static void SetComboBoxTint(
		UPARAM(ref) FComboButtonStyle& ComboButtonStyle,
		FTableRowStyle& ItemStyle, FComboBoxColorData Data
	);

	UFUNCTION(BlueprintCallable, Category = "UI Helper | Size box")
	static void SetSize(USizeBox* SizeBox, float Width, float Height);
};

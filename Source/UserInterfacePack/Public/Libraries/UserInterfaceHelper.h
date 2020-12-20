// Gradess Games. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UserInterfaceHelper.generated.h"

/**
 * UserInterfcaePack helper
 */
UCLASS()
class USERINTERFACEPACK_API UUserInterfaceHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "UI Helper")
	static FSlateBrush& SetTint(
		FSlateBrush& SlateBrush,
		FSlateColor Color
	);

	UFUNCTION(BlueprintCallable, Category = "UI Helper")
	static FButtonStyle& SetButtonTint(
		FButtonStyle& ButtonStyle,
		FSlateColor Normal,
		FSlateColor Hovered,
		FSlateColor Pressed
	);
};

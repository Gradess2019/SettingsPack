// Gradess Games. All rights reserved.

#include "Libraries/UserInterfaceHelper.h"

void UUserInterfaceHelper::SetTint(FSlateBrush& SlateBrush, FSlateColor Color)
{
	SlateBrush.TintColor = Color;
}

void UUserInterfaceHelper::SetButtonTint(
	FButtonStyle& ButtonStyle,
	FSlateColor Normal,
	FSlateColor Hovered,
	FSlateColor Pressed
)
{
	SetTint(ButtonStyle.Normal, Normal);
	SetTint(ButtonStyle.Hovered, Hovered);
	SetTint(ButtonStyle.Pressed, Pressed);
}

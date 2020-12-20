// Gradess Games. All rights reserved.

#include "Libraries/UserInterfaceHelper.h"

FSlateBrush& UUserInterfaceHelper::SetTint(FSlateBrush& SlateBrush, FSlateColor Color)
{
	SlateBrush.TintColor = Color;
	return SlateBrush;
}

FButtonStyle& UUserInterfaceHelper::SetButtonTint(
	FButtonStyle& ButtonStyle,
	FSlateColor Normal,
	FSlateColor Hovered,
	FSlateColor Pressed
)
{
	SetTint(ButtonStyle.Normal, Normal);
	SetTint(ButtonStyle.Hovered, Hovered);
	SetTint(ButtonStyle.Pressed, Pressed);

	return ButtonStyle;
}

// Gradess Games. All rights reserved.

#include "Libraries/UserInterfaceHelper.h"
#include "Components/SizeBox.h"
#include "Components/ComboBoxString.h"

void UUserInterfaceHelper::SetTint(FSlateBrush& SlateBrush, FSlateColor Color)
{
	SlateBrush.TintColor = Color;
}

void UUserInterfaceHelper::SetButtonTint(
	FButtonStyle& ButtonStyle,
	FButtonColorData Data
)
{
	SetTint(ButtonStyle.Normal, Data.Normal);
	SetTint(ButtonStyle.Hovered, Data.Hovered);
	SetTint(ButtonStyle.Pressed, Data.Pressed);
}

void UUserInterfaceHelper::SetComboBoxTintWidget(UComboBoxString* ComboBox, FComboBoxColorData Data)
{
	if (!IsValid(ComboBox)) { return; }

	SetComboBoxTint(ComboBox->WidgetStyle.ComboButtonStyle, ComboBox->ItemStyle, Data);
}

void UUserInterfaceHelper::SetComboBoxTint(
	FComboButtonStyle& ComboButtonStyle,
	FTableRowStyle& ItemStyle,
	FComboBoxColorData Data
)
{
	SetButtonTint(
		ComboButtonStyle.ButtonStyle,
		Data.Button
	);

	SetTint(ComboButtonStyle.DownArrowImage, Data.DownArrow);
	SetTint(ComboButtonStyle.MenuBorderBrush, Data.MenuBorder);

	SetTint(ItemStyle.ActiveBrush, Data.Item.Active);
	SetTint(ItemStyle.ActiveHoveredBrush, Data.Item.ActiveHovered);
	SetTint(ItemStyle.InactiveBrush, Data.Item.Inactive);
	SetTint(ItemStyle.InactiveHoveredBrush, Data.Item.InactiveHovered);
	SetTint(ItemStyle.EvenRowBackgroundHoveredBrush, Data.Item.EvenRowHovered);
	SetTint(ItemStyle.OddRowBackgroundHoveredBrush, Data.Item.OddRowHovered);

	ItemStyle.TextColor = Data.Item.Text;
	ItemStyle.SelectedTextColor = Data.Item.SelectedText;
}

void UUserInterfaceHelper::SetSize(USizeBox* SizeBox, float Width, float Height)
{
	if (!IsValid(SizeBox)) { return; }

	SizeBox->SetWidthOverride(Width);
	SizeBox->SetHeightOverride(Height);
}

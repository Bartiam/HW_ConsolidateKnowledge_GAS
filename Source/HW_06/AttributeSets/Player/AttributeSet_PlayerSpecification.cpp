﻿// © Skillbox, 2024


#include "AttributeSet_PlayerSpecification.h"

#include "GameplayEffectExtension.h"

void UAttributeSet_PlayerSpecification::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
		SetCurrentHealth(FMath::Clamp(GetCurrentHealth(), 0, GetDefaultHealth()));
}

#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "CombatDeckDetails.h"
#include "CharacterStatsBindings.h"
#include "CharacterStatsWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UCharacterStatsWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString m_CharacterName;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_CharacterClass;
    
    UPROPERTY(BlueprintReadOnly)
    FCombatDeckDetails m_CurrentWeaponCombatDeckDetails;
    
    UPROPERTY(BlueprintReadOnly)
    FCombatDeckDetails m_PreviewWeaponCombatDeckDetails;
    
    UPROPERTY(BlueprintReadOnly)
    FCombatDeckDetails m_CurrentHandCombatDeckDetails;
    
    UPROPERTY(BlueprintReadOnly)
    FCombatDeckDetails m_PreviewHandCombatDeckDetails;
    
    UPROPERTY(BlueprintReadOnly)
    FCharacterStatsBindings m_CurrentCharacterStats;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateStats();
    
    UCharacterStatsWidget();
};


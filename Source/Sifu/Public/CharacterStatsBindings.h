#pragma once
#include "CoreMinimal.h"
#include "AsyncTextureStruct.h"
#include "IntStatBinding.h"
#include "FloatStatBinding.h"
#include "CharacterStatsBindings.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStatsBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FAsyncTextureStruct m_FightingStyleIcon;
    
    UPROPERTY(BlueprintReadOnly)
    FIntStatBinding m_CurrentLevelXP;
    
    UPROPERTY(BlueprintReadOnly)
    FIntStatBinding m_XPToNextLevel;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fLevelProgress;
    
    UPROPERTY(BlueprintReadOnly)
    FIntStatBinding m_AttributePoints;
    
    UPROPERTY(BlueprintReadOnly)
    FIntStatBinding m_PrestigePoints;
    
    UPROPERTY(BlueprintReadOnly)
    FIntStatBinding m_PrestigeGrade;
    
    UPROPERTY(BlueprintReadOnly)
    FIntStatBinding m_Fragments;
    
    UPROPERTY(BlueprintReadOnly)
    FIntStatBinding m_Level;
    
    UPROPERTY(BlueprintReadOnly)
    FFloatStatBinding m_BareHandsWeightRatio;
    
    UPROPERTY(BlueprintReadOnly)
    FFloatStatBinding m_WeaponWeightRatio;
    
    SIFU_API FCharacterStatsBindings();
};


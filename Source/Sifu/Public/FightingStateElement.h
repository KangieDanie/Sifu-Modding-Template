#pragma once
#include "CoreMinimal.h"
#include "EFightingState.h"
#include "ESubFightingState.h"
#include "FightingStateElement.generated.h"

class UAttackPropertiesResistanceDB;

USTRUCT(BlueprintType)
struct FFightingStateElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bPause;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fStateDuration;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fElapsedTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bInfinite;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fMaxAccumulatedDamages;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fAccumulatedDamages;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iMaxAccumulatedHits;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iAccumulatedHits;
    
    UPROPERTY(BlueprintReadOnly)
    FName m_LastAttackName;
    
    UPROPERTY(BlueprintReadOnly)
    EFightingState m_eState;
    
    UPROPERTY(BlueprintReadOnly)
    ESubFightingState m_eSubFightingState;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAttackPropertiesResistanceDB> m_specialResistanceDB;
    
    SIFU_API FFightingStateElement();
};


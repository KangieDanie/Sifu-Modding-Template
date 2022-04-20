#pragma once
#include "CoreMinimal.h"
#include "EAttackLearningState.h"
#include "EQuadrantTypes.h"
#include "AttackFilter.generated.h"

USTRUCT(BlueprintType)
struct FAttackFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EQuadrantTypes m_eStartQuadrant;
    
    UPROPERTY(BlueprintReadWrite)
    EQuadrantTypes m_eEndQuadrant;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIsAlternativeAttack;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bExcludeUsedAttacks;
    
    UPROPERTY(BlueprintReadWrite)
    FName m_AllowedAttack;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIgnoreUknownAttacks;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIgnoreLearningAttacks;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIgnoreUnlockedAttacks;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bExcludeOtherWeaponFamilies;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bNewAttacksOnly;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_iAttackStyle;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_iSpecialAbilityMask;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIgnoreMirrored;
    
    UPROPERTY(BlueprintReadWrite)
    EAttackLearningState m_eLearningState;
    
    SIFU_API FAttackFilter();
};


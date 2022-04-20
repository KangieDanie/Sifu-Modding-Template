#pragma once
#include "CoreMinimal.h"
#include "EAIMemoryAttackType.h"
#include "AIComboCondition.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ComboTransitionConditionAIAttackMemory.generated.h"

class AThrowableActor;

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionAIAttackMemory : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_AttackProperties;
    
    UPROPERTY(EditAnywhere)
    bool m_bTestThrowAttack;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AThrowableActor> m_ThrowableClassToTest;
    
    UPROPERTY(EditAnywhere)
    EAIMemoryAttackType m_eAttackOrigin;
    
    UPROPERTY(EditAnywhere)
    float m_fMemoryLimit;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiHitsCount;
    
    UPROPERTY(EditAnywhere)
    bool m_bSuccessive;
    
    UPROPERTY(EditAnywhere)
    bool m_bWhiff;
    
    UPROPERTY(EditAnywhere)
    uint8 m_HitTypes;
    
    UPROPERTY(EditAnywhere)
    bool m_bDodged;
    
    UPROPERTY(EditAnywhere)
    bool m_bAvoided;
    
public:
    UComboTransitionConditionAIAttackMemory();
};


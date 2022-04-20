#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "AttackMemoryInfluenceTest.generated.h"

class AThrowableActor;

UCLASS()
class SIFU_API UAttackMemoryInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_AttackProperties;
    
    UPROPERTY(EditAnywhere)
    bool m_bTestThrowAttack;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AThrowableActor> m_ThrowableClassToTest;
    
    UPROPERTY(EditAnywhere)
    float m_fMemoryLimit;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiHitsCount;
    
    UPROPERTY(EditAnywhere)
    uint8 m_HitTypes;
    
    UPROPERTY(EditAnywhere)
    bool m_bDodged;
    
    UPROPERTY(EditAnywhere)
    bool m_bAvoided;
    
public:
    UAttackMemoryInfluenceTest();
};


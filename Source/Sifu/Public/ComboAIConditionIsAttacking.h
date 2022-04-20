#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsAttacking.generated.h"

class UAttackDB;

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsAttacking : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bInvert;
    
    UPROPERTY(EditAnywhere)
    UAttackDB* m_AttackToTest;
    
    UComboAIConditionIsAttacking();
};


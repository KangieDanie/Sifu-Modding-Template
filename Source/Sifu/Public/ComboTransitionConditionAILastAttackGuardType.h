#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "ComboTransitionConditionAILastAttackGuardType.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionAILastAttackGuardType : public UComboTransitionCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 m_uiGuardType;
    
    UPROPERTY(EditAnywhere)
    bool m_bDodged;
    
    UPROPERTY(EditAnywhere)
    bool m_bAvoided;
    
public:
    UComboTransitionConditionAILastAttackGuardType();
};


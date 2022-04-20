#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "EFightingActionState.h"
#include "ComboTransitionConditionActionState.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionActionState : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFightingActionState m_ActionState;
    
    UComboTransitionConditionActionState();
};


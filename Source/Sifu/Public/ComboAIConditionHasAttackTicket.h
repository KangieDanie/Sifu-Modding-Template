#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionHasAttackTicket.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionHasAttackTicket : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bInvert;
    
    UComboAIConditionHasAttackTicket();
};


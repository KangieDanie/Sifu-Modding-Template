#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsFrozenBySanctuary.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsFrozenBySanctuary : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bInvert;
    
    UComboAIConditionIsFrozenBySanctuary();
};


#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionFindProxyNearPlayer.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionFindProxyNearPlayer : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinimumDistance;
    
    UComboAIConditionFindProxyNearPlayer();
};


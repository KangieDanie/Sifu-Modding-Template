#pragma once
#include "CoreMinimal.h"
#include "AITimedConditionedAction.h"
#include "AIConditionedAction.h"
#include "AIResistanceActions.generated.h"

USTRUCT(BlueprintType)
struct FAIResistanceActions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAITimedConditionedAction> m_OnTick;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIConditionedAction> m_OnEnd;
    
    SIFU_API FAIResistanceActions();
};


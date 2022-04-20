#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "OrderHasTargetActivationCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UOrderHasTargetActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UOrderHasTargetActivationCondition();
};


#pragma once
#include "CoreMinimal.h"
#include "CameraSafePointCondition.h"
#include "CameraSafePointPlacement.h"
#include "CameraSafePointConditionalPlacement.generated.h"

USTRUCT(BlueprintType)
struct FCameraSafePointConditionalPlacement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCameraSafePointCondition m_condition;
    
    UPROPERTY(EditAnywhere)
    FCameraSafePointPlacement m_placement;
    
    SIFU_API FCameraSafePointConditionalPlacement();
};


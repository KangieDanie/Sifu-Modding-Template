#pragma once
#include "CoreMinimal.h"
#include "ActionConditions.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FActionConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAllowedOnEmptyGauge;
    
    UPROPERTY(EditAnywhere)
    bool bAllowedOnBrokenGuard;
    
    FActionConditions();
};


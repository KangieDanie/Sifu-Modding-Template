#pragma once
#include "CoreMinimal.h"
#include "GuardUpdateStruct.generated.h"

USTRUCT(BlueprintType)
struct FGuardUpdateStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_fGuardGaugePercentageTargetValue;
    
    UPROPERTY()
    int64 m_iGuardGuageTargetTime;
    
    SIFU_API FGuardUpdateStruct();
};


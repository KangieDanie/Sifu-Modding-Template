#pragma once
#include "CoreMinimal.h"
#include "SCFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FSCFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMin;
    
    UPROPERTY(EditAnywhere)
    float m_fMax;
    
    SIFU_API FSCFloatRange();
};


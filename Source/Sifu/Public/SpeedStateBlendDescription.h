#pragma once
#include "CoreMinimal.h"
#include "SpeedStateBlendDescription.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSpeedStateBlendDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_BlendTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_BlendCurve;
    
    SIFU_API FSpeedStateBlendDescription();
};


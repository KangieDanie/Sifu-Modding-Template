#pragma once
#include "CoreMinimal.h"
#include "FallOnSlopeConfiguration.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFallOnSlopeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fWakeVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_ImpulseCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fAngularDamping;
    
    UPROPERTY(EditAnywhere)
    float m_fLinearDamping;
    
    SIFU_API FFallOnSlopeConfiguration();
};


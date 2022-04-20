#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DPICustomScalingRule
#include "Engine/DPICustomScalingRule.h"
#include "SCCustomDPIScaling.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API USCCustomDPIScaling : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBaseRatio;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CurveBelowRatio;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CurveAboveRatio;
    
    USCCustomDPIScaling();
};


#pragma once
#include "CoreMinimal.h"
#include "DefenseGauge.generated.h"

USTRUCT(BlueprintType)
struct FDefenseGauge {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxValue;
    
    UPROPERTY(EditAnywhere)
    float m_fCooldownBeforeRecovery;
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryRatePerSec;
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryRatePerSecWhenComplete;
    
    SIFU_API FDefenseGauge();
};


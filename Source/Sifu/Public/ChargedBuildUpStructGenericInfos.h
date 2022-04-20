#pragma once
#include "CoreMinimal.h"
#include "ChargedBuildUpStructGenericInfos.generated.h"

USTRUCT(BlueprintType)
struct FChargedBuildUpStructGenericInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fDurationOfCharging;
    
    UPROPERTY(EditAnywhere)
    float m_fExtraHoldingTimeAfterChargeIscomplete;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowQuadrantToRecompute;
    
    SIFU_API FChargedBuildUpStructGenericInfos();
};


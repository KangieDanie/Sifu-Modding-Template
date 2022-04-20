#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.h"
#include "EMoveStatus.h"
#include "LookAtLimits.h"
#include "LookAtLocomotionLimits.generated.h"

USTRUCT(BlueprintType)
struct FLookAtLocomotionLimits {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpeedState m_eSpeedState;
    
    UPROPERTY(EditAnywhere)
    EMoveStatus m_eMoveStatus;
    
    UPROPERTY(EditAnywhere)
    FLookAtLimits m_limits;
    
    SIFU_API FLookAtLocomotionLimits();
};


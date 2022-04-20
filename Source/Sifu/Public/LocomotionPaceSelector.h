#pragma once
#include "CoreMinimal.h"
#include "SpeedStateFromGoalDistSelector.h"
#include "LocomotionPaceSelector.generated.h"

USTRUCT(BlueprintType)
struct FLocomotionPaceSelector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSpeedStateFromGoalDistSelector m_speedStateFromGoalDistSelectors[3];
    
    SIFU_API FLocomotionPaceSelector();
};


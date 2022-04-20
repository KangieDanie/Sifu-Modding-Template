#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.h"
#include "SpeedStateFromGoalDistSelector.generated.h"

USTRUCT(BlueprintType)
struct FSpeedStateFromGoalDistSelector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpeedState m_eNearFromGoalSpeedState;
    
    UPROPERTY(EditAnywhere)
    float m_fDistToGoalThresold;
    
    UPROPERTY(EditAnywhere)
    ESpeedState m_eFarFromGoalSpeedState;
    
    SIFU_API FSpeedStateFromGoalDistSelector();
};


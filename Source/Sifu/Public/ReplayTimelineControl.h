#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineControl.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FReplayTimelineControl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fMinInputTimeS;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCursorMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCursorBaseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_Curve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCursorMaxSpeedReachedTimeS;
    
public:
    SIFU_API FReplayTimelineControl();
};


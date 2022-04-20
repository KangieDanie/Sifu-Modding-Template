#pragma once
#include "CoreMinimal.h"
#include "ReplaySerializedEvent.h"
#include "ReplayCameraTransform.h"
#include "ReplayGameplayCameraRecordEvent.generated.h"

USTRUCT(BlueprintType)
struct FReplayGameplayCameraRecordEvent : public FReplaySerializedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FReplayCameraTransform m_FirstFrameCameraTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FReplayCameraTransform m_LastFrameCameraTransform;
    
    SIFU_API FReplayGameplayCameraRecordEvent();
};


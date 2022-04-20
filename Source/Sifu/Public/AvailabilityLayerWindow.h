#pragma once
#include "CoreMinimal.h"
#include "FrameRange.h"
#include "AvailabilityLayerWindow.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct FAvailabilityLayerWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_uiHitConditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvailabilityLayerData* m_Layer;
    
    SIFU_API FAvailabilityLayerWindow();
};


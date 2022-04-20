#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCaches.h"
#include "ReplayAvailabilityLayerCache.generated.h"

USTRUCT(BlueprintType)
struct FReplayAvailabilityLayerCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_TimeControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_KeyEdition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_FreeFly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_KeySelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_HoveringKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_KeyCameraPositionEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_Scrubbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_MovingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_ReplayPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAvailabilityLayerCaches m_KeyCopied;
    
    SIFU_API FReplayAvailabilityLayerCache();
};


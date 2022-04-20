#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCache.h"
#include "AvailabilityLayerCaches.generated.h"

USTRUCT(BlueprintType)
struct FAvailabilityLayerCaches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAvailabilityLayerCache> m_layers;
    
    SIFU_API FAvailabilityLayerCaches();
};


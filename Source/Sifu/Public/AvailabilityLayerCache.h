#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCache.generated.h"

class UGenericAvailabilityLayerDB;

USTRUCT(BlueprintType)
struct FAvailabilityLayerCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericAvailabilityLayerDB* m_DB;
    
    SIFU_API FAvailabilityLayerCache();
};


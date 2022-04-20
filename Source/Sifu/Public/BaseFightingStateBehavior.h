#pragma once
#include "CoreMinimal.h"
#include "BaseFightingStateBehavior.generated.h"

class UAvailabilityLayerData;

USTRUCT()
struct FBaseFightingStateBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bIsPersistent;
    
    UPROPERTY(EditAnywhere)
    int32 m_iPersistencePriority;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_SuperAvailabilityLayer;
    
    SIFU_API FBaseFightingStateBehavior();
};


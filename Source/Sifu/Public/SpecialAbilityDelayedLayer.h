#pragma once
#include "CoreMinimal.h"
#include "SpecialAbilityDelayedLayer.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct SIFU_API FSpecialAbilityDelayedLayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_PushLayerOnSuccess;
    
    UPROPERTY(EditAnywhere)
    float m_fPushLayerDelay;
    
    FSpecialAbilityDelayedLayer();
};


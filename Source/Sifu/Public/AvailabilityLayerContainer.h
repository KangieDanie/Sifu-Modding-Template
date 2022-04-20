#pragma once
#include "CoreMinimal.h"
#include "EALBinaryOperation.h"
#include "AvailabilityLayerContainer.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct FAvailabilityLayerContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eOperation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iPriority;
    
    SIFU_API FAvailabilityLayerContainer();
};


#pragma once
#include "CoreMinimal.h"
#include "EALBinaryOperation.h"
#include "AvailabilityLayerCombinations.generated.h"

class UAvailabilityLayerData;

USTRUCT(BlueprintType)
struct SIFU_API FAvailabilityLayerCombinations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_LayerData;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eOperator;
    
    FAvailabilityLayerCombinations();
};


#pragma once
#include "CoreMinimal.h"
#include "StateWeight.generated.h"

USTRUCT(BlueprintType)
struct FStateWeight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fTargetWeight;
    
    UPROPERTY(EditAnywhere)
    float m_fInDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fOutDuration;
    
    SIFU_API FStateWeight();
};


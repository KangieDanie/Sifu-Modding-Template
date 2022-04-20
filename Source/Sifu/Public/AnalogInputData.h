#pragma once
#include "CoreMinimal.h"
#include "InputData.h"
#include "AnalogInputData.generated.h"

UCLASS()
class SIFU_API UAnalogInputData : public UInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_validityThreshold;
    
    UAnalogInputData();
};


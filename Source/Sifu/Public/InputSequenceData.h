#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "InputSequenceStep.h"
#include "InputSequenceData.generated.h"

UCLASS()
class SIFU_API UInputSequenceData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInputSequenceStep> m_Sequence;
    
    UInputSequenceData();
};


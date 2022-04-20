#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "InputSequenceStep.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputSequenceStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericInputData* m_Input;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_DelayBeforeNextAction;
    
    SIFU_API FInputSequenceStep();
};


#pragma once
#include "CoreMinimal.h"
#include "InputDataTutorialStruct.h"
#include "InputTutorialStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInputTutorialStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FInputDataTutorialStruct> m_InputSequence;
    
    FInputTutorialStruct();
};


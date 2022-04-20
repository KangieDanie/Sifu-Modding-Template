#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InputAction.h"
#include "InputPad.generated.h"

class UGenericInputData;

UCLASS(BlueprintType)
class SIFU_API UInputPad : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    UGenericInputData* BPF_GetInputDataForAction(InputAction _eAction) const;
    
    UInputPad();
};


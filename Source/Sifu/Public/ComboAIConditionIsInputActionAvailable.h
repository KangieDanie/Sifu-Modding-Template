#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsInputActionAvailable.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsInputActionAvailable : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    InputAction m_eInput;
    
public:
    UComboAIConditionIsInputActionAvailable();
};


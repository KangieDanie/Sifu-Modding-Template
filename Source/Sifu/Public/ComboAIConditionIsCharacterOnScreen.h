#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsCharacterOnScreen.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsCharacterOnScreen : public UAIComboCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fMinTimeOnScreen;
    
public:
    UComboAIConditionIsCharacterOnScreen();
};


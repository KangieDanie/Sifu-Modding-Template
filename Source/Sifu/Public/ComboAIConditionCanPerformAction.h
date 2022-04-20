#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIComboCondition.h"
#include "ComboAIConditionCanPerformAction.generated.h"

class USCAiAction;

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionCanPerformAction : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<USCAiAction> m_Action;
    
public:
    UComboAIConditionCanPerformAction();
};


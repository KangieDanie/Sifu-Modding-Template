#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsCombatRole.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionIsCombatRole : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 m_eCombatRolesMask;
    
public:
    UComboAIConditionIsCombatRole();
};


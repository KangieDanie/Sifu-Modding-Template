#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "ComboTransitionCondition.h"
#include "ComboTransitionConditionGeneric.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionGeneric : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_condition;
    
    UComboTransitionConditionGeneric();
};


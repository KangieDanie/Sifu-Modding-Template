#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "ComboTransitionConditionRandom.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionRandom : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fTrueProbability;
    
    UComboTransitionConditionRandom();
};


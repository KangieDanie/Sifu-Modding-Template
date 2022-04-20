#pragma once
#include "CoreMinimal.h"
#include "EComboTransition.h"
#include "ComboTransition.generated.h"

class UComboTransitionCondition;

USTRUCT(BlueprintType)
struct FComboTransition {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EComboTransition m_eInputTransition;
    
    UPROPERTY(VisibleAnywhere)
    UComboTransitionCondition* m_ConditionInstance;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint8, int32> m_TargetNodes;
    
    UPROPERTY(VisibleAnywhere)
    float m_fProbability;
    
    SIFU_API FComboTransition();
};


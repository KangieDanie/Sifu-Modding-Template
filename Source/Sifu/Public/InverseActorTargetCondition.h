#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "InverseActorTargetCondition.generated.h"

UCLASS()
class SIFU_API UInverseActorTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_condition;
    
    UInverseActorTargetCondition();
};


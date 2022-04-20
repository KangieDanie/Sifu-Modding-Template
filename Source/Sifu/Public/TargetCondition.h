#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "BaseActorConditionInstance.h"
#include "TargetCondition.generated.h"

UCLASS()
class SIFU_API UTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_condition;
    
    UTargetCondition();
};


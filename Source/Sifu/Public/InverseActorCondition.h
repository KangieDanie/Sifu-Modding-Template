#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BaseActorConditionInstance.h"
#include "InverseActorCondition.generated.h"

UCLASS()
class SIFU_API UInverseActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_condition;
    
    UInverseActorCondition();
};


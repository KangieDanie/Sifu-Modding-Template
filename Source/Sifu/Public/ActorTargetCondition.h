#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "ActorTargetCondition.generated.h"

UCLASS()
class SIFU_API UActorTargetCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_OptionalSubConditionOnTarget;
    
    UActorTargetCondition();
};


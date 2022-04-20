#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "EActionType.h"
#include "ActionTargetCondition.generated.h"

UCLASS()
class SIFU_API UActionTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EActionType m_eAction;
    
    UActionTargetCondition();
};


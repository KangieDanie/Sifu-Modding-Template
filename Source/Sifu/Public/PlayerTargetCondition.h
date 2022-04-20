#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EActionType.h"
#include "BaseActorTargetConditionInstance.h"
#include "PlayerTargetCondition.generated.h"

UCLASS()
class SIFU_API UPlayerTargetCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EActionType m_eAction;
    
    UPROPERTY(EditAnywhere)
    bool m_bUpdateTarget;
    
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_OptionalSubConditionOnTarget;
    
    UPlayerTargetCondition();
};


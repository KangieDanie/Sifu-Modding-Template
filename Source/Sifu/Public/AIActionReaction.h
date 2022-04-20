#pragma once
#include "CoreMinimal.h"
#include "AIConditionedAction.h"
#include "AIActionReaction.generated.h"

USTRUCT(BlueprintType)
struct FAIActionReaction : public FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fTestFrequency;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanCancelPendingActions;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnlyWhenAlerted;
    
    SIFU_API FAIActionReaction();
};


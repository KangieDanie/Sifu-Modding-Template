#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "TE_CurrentAttacked.generated.h"

UCLASS(Abstract)
class SIFU_API UTE_CurrentAttacked : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fAutoSelectTargetCooldown;
    
    UTE_CurrentAttacked();
};


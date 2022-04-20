#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EFightingState.h"
#include "FightingStateCondition.generated.h"

UCLASS()
class SIFU_API UFightingStateCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFightingState m_eFightingState;
    
    UFightingStateCondition();
};


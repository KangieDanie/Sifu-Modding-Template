#pragma once
#include "CoreMinimal.h"
#include "AIAttackJokerSituationConfig.h"
#include "AIAttackJokerSituationConfigsPerDominationStep.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackJokerSituationConfigsPerDominationStep {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAIAttackJokerSituationConfig m_Configs[3];
    
    SIFU_API FAIAttackJokerSituationConfigsPerDominationStep();
};


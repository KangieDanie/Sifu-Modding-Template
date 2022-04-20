#pragma once
#include "CoreMinimal.h"
#include "BasePositionSettings.h"
#include "EAIWuguanTicketEvaluation.h"
#include "BaseCombatPositionSettings.generated.h"

UCLASS(Abstract)
class SIFU_API UBaseCombatPositionSettings : public UBasePositionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<EAIWuguanTicketEvaluation, float> m_fTestScoreFactors;
    
    UBaseCombatPositionSettings();
};


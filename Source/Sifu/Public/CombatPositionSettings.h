#pragma once
#include "CoreMinimal.h"
#include "BaseCombatPositionSettings.h"
#include "CombatPositionSettings.generated.h"

UCLASS()
class SIFU_API UCombatPositionSettings : public UBaseCombatPositionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_fPositionEliminationAngle;
    
    UCombatPositionSettings();
};


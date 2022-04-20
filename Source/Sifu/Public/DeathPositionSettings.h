#pragma once
#include "CoreMinimal.h"
#include "BaseCombatPositionSettings.h"
#include "DeathPositionSettings.generated.h"

UCLASS()
class SIFU_API UDeathPositionSettings : public UBaseCombatPositionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_fHeavySurpriseDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fLightSurpriseDistance;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iProbaToPlayLightSurprise;
    
    UDeathPositionSettings();
};


#pragma once
#include "CoreMinimal.h"
#include "SpeedTransitionsAnimContainer.h"
#include "CardinalChangementAnimContainer.h"
#include "CombatSpeedTransitionsAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FCombatSpeedTransitionsAnimContainer : public FSpeedTransitionsAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCardinalChangementAnimContainer m_Start_FR;
    
    SIFU_API FCombatSpeedTransitionsAnimContainer();
};


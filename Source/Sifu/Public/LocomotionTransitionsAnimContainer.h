#pragma once
#include "CoreMinimal.h"
#include "CombatSpeedTransitionsAnimContainer.h"
#include "SpeedTransitionsAnimContainer.h"
#include "OrientedRotationAnimContainer.h"
#include "LocomotionTransitionsAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FLocomotionTransitionsAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCombatSpeedTransitionsAnimContainer m_V1[2];
    
    UPROPERTY(EditAnywhere)
    FSpeedTransitionsAnimContainer m_V2;
    
    UPROPERTY(EditAnywhere)
    FSpeedTransitionsAnimContainer m_V3;
    
    UPROPERTY(EditAnywhere)
    FOrientedRotationAnimContainer m_TurnInPlace[2];
    
    SIFU_API FLocomotionTransitionsAnimContainer();
};


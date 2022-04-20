#pragma once
#include "CoreMinimal.h"
#include "CardinalAnimContainer.h"
#include "CardinalChangementAnimContainer.h"
#include "OrientedRotationAnimContainer.h"
#include "SpeedTransitionsAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FSpeedTransitionsAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCardinalChangementAnimContainer m_Start_FL;
    
    UPROPERTY(EditAnywhere)
    FCardinalAnimContainer m_Stop_FL;
    
    UPROPERTY(EditAnywhere)
    FOrientedRotationAnimContainer m_UTurn;
    
    UPROPERTY(EditAnywhere)
    FCardinalAnimContainer m_Strafe;
    
    SIFU_API FSpeedTransitionsAnimContainer();
};


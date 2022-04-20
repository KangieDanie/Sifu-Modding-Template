#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayAbilities GameplayModMagnitudeCalculation
#include "GameplayModMagnitudeCalculation.h"
#include "MMCPrepFocusCooldown.generated.h"

UCLASS()
class SIFU_API UMMCPrepFocusCooldown : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UMMCPrepFocusCooldown();
};


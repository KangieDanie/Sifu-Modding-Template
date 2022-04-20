#pragma once
#include "CoreMinimal.h"
#include "ETransitionRotation.generated.h"

UENUM(BlueprintType)
enum class ETransitionRotation : uint8 {
    Degree_0,
    Degree_90,
    Degree_180,
    Count,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "EAvoidLaunchMethod.generated.h"

UENUM(BlueprintType)
enum class EAvoidLaunchMethod : uint8 {
    EndOfStrike,
    WhenHitHappen,
};


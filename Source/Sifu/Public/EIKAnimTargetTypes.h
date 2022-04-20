#pragma once
#include "CoreMinimal.h"
#include "EIKAnimTargetTypes.generated.h"

UENUM(BlueprintType)
enum class EIKAnimTargetTypes : uint8 {
    Target,
    Target_Alt,
    Count,
    None,
};


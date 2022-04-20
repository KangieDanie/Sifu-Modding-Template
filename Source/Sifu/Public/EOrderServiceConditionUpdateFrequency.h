#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceConditionUpdateFrequency.generated.h"

UENUM()
enum class EOrderServiceConditionUpdateFrequency : uint8 {
    OncePerOrder,
    OnDemand,
};


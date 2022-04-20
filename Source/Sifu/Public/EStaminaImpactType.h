#pragma once
#include "CoreMinimal.h"
#include "EStaminaImpactType.generated.h"

UENUM()
enum class EStaminaImpactType : uint8 {
    StopRecovery,
    Consumption,
    StartRecovery,
    Count,
    None,
};


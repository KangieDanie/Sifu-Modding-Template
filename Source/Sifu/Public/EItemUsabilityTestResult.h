#pragma once
#include "CoreMinimal.h"
#include "EItemUsabilityTestResult.generated.h"

UENUM()
enum class EItemUsabilityTestResult {
    CanUse,
    NotEquipped,
    OnCoolDown,
    NoItemLeft,
    TargetRecquirementsNotMet,
};


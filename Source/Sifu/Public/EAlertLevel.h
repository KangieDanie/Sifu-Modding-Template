#pragma once
#include "CoreMinimal.h"
#include "EAlertLevel.generated.h"

UENUM()
enum class EAlertLevel : uint8 {
    Normal,
    Suspicious,
    Alert,
    Count,
};


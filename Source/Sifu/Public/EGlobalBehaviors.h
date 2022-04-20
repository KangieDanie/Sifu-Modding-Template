#pragma once
#include "CoreMinimal.h"
#include "EGlobalBehaviors.generated.h"

UENUM()
enum class EGlobalBehaviors : uint8 {
    Idle,
    Suspicious,
    Surprised,
    Alerted,
    Abandoning,
    Friendly,
    Count,
    None,
};


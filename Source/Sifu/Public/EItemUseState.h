#pragma once
#include "CoreMinimal.h"
#include "EItemUseState.generated.h"

UENUM()
enum class EItemUseState : uint8 {
    BuildUp,
    Use,
    InstantUse,
    Release,
    Count,
    None,
};


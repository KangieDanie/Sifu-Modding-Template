#pragma once
#include "CoreMinimal.h"
#include "EAITargetOrderState.generated.h"

UENUM()
enum class EAITargetOrderState : uint8 {
    Played,
    Ended,
};


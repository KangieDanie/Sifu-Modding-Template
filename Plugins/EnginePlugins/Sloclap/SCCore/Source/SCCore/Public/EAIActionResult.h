#pragma once
#include "CoreMinimal.h"
#include "EAIActionResult.generated.h"

UENUM()
enum class EAIActionResult {
    Scheduled,
    Succeeded,
    Failed,
    InProgress,
    Created,
};


#pragma once
#include "CoreMinimal.h"
#include "EAIActionScheduleCondition.generated.h"

UENUM(BlueprintType)
enum class EAIActionScheduleCondition : uint8 {
    None,
    Succeeded,
    Failed,
};


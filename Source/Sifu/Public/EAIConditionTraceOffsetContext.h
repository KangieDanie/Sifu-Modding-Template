#pragma once
#include "CoreMinimal.h"
#include "EAIConditionTraceOffsetContext.generated.h"

UENUM()
enum class EAIConditionTraceOffsetContext : uint8 {
    Instigator,
    Target,
    World,
};


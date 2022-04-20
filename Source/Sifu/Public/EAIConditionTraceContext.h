#pragma once
#include "CoreMinimal.h"
#include "EAIConditionTraceContext.generated.h"

UENUM()
enum class EAIConditionTraceContext : uint8 {
    Instigator,
    Target,
};


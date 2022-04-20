#pragma once
#include "CoreMinimal.h"
#include "EAIConditionTraceRotationContext.generated.h"

UENUM()
enum class EAIConditionTraceRotationContext : uint8 {
    Instigator,
    Target,
    Identity,
};


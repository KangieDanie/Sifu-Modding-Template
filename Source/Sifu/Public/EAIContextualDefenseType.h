#pragma once
#include "CoreMinimal.h"
#include "EAIContextualDefenseType.generated.h"

UENUM()
enum class EAIContextualDefenseType : uint8 {
    Default,
    Throwable,
    FromGround,
    Count,
};


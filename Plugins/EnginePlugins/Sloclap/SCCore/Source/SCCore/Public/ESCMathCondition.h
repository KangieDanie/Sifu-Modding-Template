#pragma once
#include "CoreMinimal.h"
#include "ESCMathCondition.generated.h"

UENUM()
enum class ESCMathCondition : uint8 {
    Lower,
    LowerOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
};


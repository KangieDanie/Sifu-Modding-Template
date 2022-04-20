#pragma once
#include "CoreMinimal.h"
#include "EMovableType.generated.h"

UENUM()
enum class EMovableType : uint8 {
    Pushable,
    Throwable,
    Count,
};


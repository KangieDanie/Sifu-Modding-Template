#pragma once
#include "CoreMinimal.h"
#include "EDodgeType.generated.h"

UENUM(BlueprintType)
enum class EDodgeType : uint8 {
    Default,
    KnockedDown,
    GoingToKnockedDown,
    Count,
};


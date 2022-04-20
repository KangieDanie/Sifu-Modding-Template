#pragma once
#include "CoreMinimal.h"
#include "EDropReason.generated.h"

UENUM(BlueprintType)
enum class EDropReason : uint8 {
    Death,
    Knockdown,
    FromInput,
    FromHit,
    Disarm,
    Broke,
    Default,
};


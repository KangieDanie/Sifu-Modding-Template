#pragma once
#include "CoreMinimal.h"
#include "EGuardType.generated.h"

UENUM(BlueprintType)
enum class EGuardType : uint8 {
    None,
    Guard,
    Deflect,
    Count,
};


#pragma once
#include "CoreMinimal.h"
#include "EMappingValidationErrorType.generated.h"

UENUM(BlueprintType)
enum class EMappingValidationErrorType : uint8 {
    Collision,
    InvalidInput,
    Valid,
};


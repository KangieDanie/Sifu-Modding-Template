#pragma once
#include "CoreMinimal.h"
#include "ESaveValidationResult.generated.h"

UENUM()
enum class ESaveValidationResult {
    Valid,
    Empty,
    ContainsNonAlphaNumeric,
    AlreadyExist,
    TooLong,
};


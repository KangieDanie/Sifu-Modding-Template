#pragma once
#include "CoreMinimal.h"
#include "ESaveResult.generated.h"

UENUM()
enum class ESaveResult : uint8 {
    Valid,
    Empty,
    ErrorFileNotCreated,
    ErrorFileCorrupted,
    GenericError,
    HashInvalid,
};


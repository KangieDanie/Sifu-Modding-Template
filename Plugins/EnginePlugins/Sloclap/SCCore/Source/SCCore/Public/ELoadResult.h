#pragma once
#include "CoreMinimal.h"
#include "ELoadResult.generated.h"

UENUM()
enum class ELoadResult : uint8 {
    Valid,
    Empty,
    HashInvalid,
    FileNotFound,
    SaveNotCreated,
    Count,
    None,
};


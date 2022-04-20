#pragma once
#include "CoreMinimal.h"
#include "EPendantUpdate.generated.h"

UENUM()
enum class EPendantUpdate : uint8 {
    IncrementSuccessfulPendantNotFull,
    IncrementSuccessfulPendantFull,
    IncrementFailedPendantFull,
};


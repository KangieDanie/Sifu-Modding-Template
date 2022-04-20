#pragma once
#include "CoreMinimal.h"
#include "EOrderState.generated.h"

UENUM()
enum class EOrderState : uint8 {
    None,
    Starting,
    Processing,
    Stopped,
    Cancelled,
    Count,
};


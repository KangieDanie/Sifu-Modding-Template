#pragma once
#include "CoreMinimal.h"
#include "EOrderCommandType.generated.h"

UENUM()
enum class EOrderCommandType {
    Play,
    Cancel,
    CancelAll,
    Count,
    None,
};


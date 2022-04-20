#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceState.generated.h"

UENUM()
enum class EOrderServiceState {
    None,
    Running,
    Pending,
    Finished = 0x4,
    All = 0x7,
};


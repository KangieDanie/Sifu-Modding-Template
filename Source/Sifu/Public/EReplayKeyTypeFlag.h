#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyTypeFlag.generated.h"

UENUM()
enum class EReplayKeyTypeFlag : uint8 {
    None,
    Camera,
    TimeDilation,
};


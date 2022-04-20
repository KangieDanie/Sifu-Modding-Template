#pragma once
#include "CoreMinimal.h"
#include "EHandPoses.generated.h"

UENUM()
enum class EHandPoses {
    HammerGrip,
    BrokenGrip,
    ReverseHammerGrip,
    ReverseBrokenGrip,
    Count,
    None,
};


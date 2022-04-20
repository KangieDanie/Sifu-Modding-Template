#pragma once
#include "CoreMinimal.h"
#include "EHitTypeDetected.generated.h"

UENUM()
enum class EHitTypeDetected {
    AnyHit,
    HitNotDismissed,
    NoHit,
};


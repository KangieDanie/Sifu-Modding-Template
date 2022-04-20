#pragma once
#include "CoreMinimal.h"
#include "EBounceType.generated.h"

UENUM(BlueprintType)
enum class EBounceType : uint8 {
    SimpleBounce,
    BounceBackToInstigator,
    GoThrough,
};


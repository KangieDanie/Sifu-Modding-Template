#pragma once
#include "CoreMinimal.h"
#include "EOrderSubType.generated.h"

UENUM()
enum class EOrderSubType {
    None,
    Parallelizable,
    BoundToAnimState,
};


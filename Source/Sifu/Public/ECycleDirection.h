#pragma once
#include "CoreMinimal.h"
#include "ECycleDirection.generated.h"

UENUM()
enum class ECycleDirection : uint8 {
    Next,
    Previous,
    None,
};


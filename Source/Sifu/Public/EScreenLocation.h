#pragma once
#include "CoreMinimal.h"
#include "EScreenLocation.generated.h"

UENUM(BlueprintType)
enum class EScreenLocation : uint8 {
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
};


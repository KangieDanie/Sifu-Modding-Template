#pragma once
#include "CoreMinimal.h"
#include "ESCTestDistance.generated.h"

UENUM()
enum class ESCTestDistance : uint8 {
    ItemLocationToContextBounding,
    ItemBoundingBoxToContextLocation,
};


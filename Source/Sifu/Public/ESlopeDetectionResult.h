#pragma once
#include "CoreMinimal.h"
#include "ESlopeDetectionResult.generated.h"

UENUM()
enum class ESlopeDetectionResult {
    OnSlopeDescending,
    OnSlopeAscending,
    OnPlaneGround,
    CouldNotBeTested,
};


#pragma once
#include "CoreMinimal.h"
#include "EGameFlowTravelType.generated.h"

UENUM()
enum class EGameFlowTravelType : uint8 {
    SeamlessWithPreload,
    ClassicLoadMap,
    None,
};


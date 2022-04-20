#pragma once
#include "CoreMinimal.h"
#include "EAvoidTrackingTypes.generated.h"

UENUM()
enum class EAvoidTrackingTypes : uint8 {
    TrueTarget,
    FakeTarget,
    None,
};


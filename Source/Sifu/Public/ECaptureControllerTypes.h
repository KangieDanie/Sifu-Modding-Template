#pragma once
#include "CoreMinimal.h"
#include "ECaptureControllerTypes.generated.h"

UENUM()
enum class ECaptureControllerTypes {
    None,
    Gamepad,
    Keyboard,
    Count,
};


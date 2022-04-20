#pragma once
#include "CoreMinimal.h"
#include "EInputMappingForceController.generated.h"

UENUM(BlueprintType)
enum class EInputMappingForceController : uint8 {
    CurrentController,
    Gamepad,
    Keyboard,
};


#pragma once
#include "CoreMinimal.h"
#include "EOrderServiceDeactivationMethod.generated.h"

UENUM()
enum class EOrderServiceDeactivationMethod : uint8 {
    None,
    CleanStop,
    Interruption,
};


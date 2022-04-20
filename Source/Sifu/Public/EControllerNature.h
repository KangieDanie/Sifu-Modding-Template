#pragma once
#include "CoreMinimal.h"
#include "EControllerNature.generated.h"

UENUM()
enum class EControllerNature : uint8 {
    Player,
    AI,
    None,
};


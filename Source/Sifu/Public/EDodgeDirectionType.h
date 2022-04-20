#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirectionType.generated.h"

UENUM()
enum class EDodgeDirectionType : uint8 {
    Side,
    Back,
    Count,
    None,
};


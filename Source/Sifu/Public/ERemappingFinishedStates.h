#pragma once
#include "CoreMinimal.h"
#include "ERemappingFinishedStates.generated.h"

UENUM()
enum class ERemappingFinishedStates : uint8 {
    Fail_UnauthorizeKeyPressed,
    Fail_ExpectKeyboardMouseKey,
    Fail_ExpectedControllerKey,
    Count,
    Success,
    Remove,
    Cancelled,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "EActivityWantedState.generated.h"

UENUM()
enum class EActivityWantedState : uint8 {
    Started,
    StartedThenEnded,
    Ended,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "EALPriority.generated.h"

UENUM()
enum class EALPriority : uint8 {
    Default,
    BlockingFightingState,
    Prediction,
    TutorialTestInput,
};


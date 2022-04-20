#pragma once
#include "CoreMinimal.h"
#include "ECinematicAnimBlendState.generated.h"

UENUM()
enum class ECinematicAnimBlendState {
    EaseIn,
    Playing,
    EaseOut,
    EaseOutFinished,
    None,
};


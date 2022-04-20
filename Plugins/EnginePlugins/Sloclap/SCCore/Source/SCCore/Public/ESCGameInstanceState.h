#pragma once
#include "CoreMinimal.h"
#include "ESCGameInstanceState.generated.h"

UENUM(BlueprintType)
enum class ESCGameInstanceState : uint8 {
    None,
    PressStart,
    MessageMenu,
    Playing,
};


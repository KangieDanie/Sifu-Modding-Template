#pragma once
#include "CoreMinimal.h"
#include "InputContext.generated.h"

UENUM(BlueprintType)
enum class InputContext : uint8 {
    BasicGameplay,
    Menu,
    CustomDataOnly,
    Spectator,
    FlyMode,
    Empty,
    Cinematic,
    StartupMenu,
    PhotoModeMenu,
    ReplayEditorMenu,
    FocusMode,
    Count,
    Invalid,
};


#pragma once
#include "CoreMinimal.h"
#include "EStartupMenuState.generated.h"

UENUM(BlueprintType)
enum class EStartupMenuState : uint8 {
    IIS,
    IIS_Pressed,
    LoadingProfile,
    ProfileLoaded,
    ProfileWithNoSave,
    SaveLoadSucceeded,
    SaveLoadFailed,
};


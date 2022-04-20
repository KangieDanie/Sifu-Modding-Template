#pragma once
#include "CoreMinimal.h"
#include "ETraversalPhase.generated.h"

UENUM(BlueprintType)
enum class ETraversalPhase : uint8 {
    Entry,
    Loop,
    PreExit,
    ExitLoop,
    Landing,
    Count,
    None,
};


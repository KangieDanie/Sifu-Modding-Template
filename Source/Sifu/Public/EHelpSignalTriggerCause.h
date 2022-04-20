#pragma once
#include "CoreMinimal.h"
#include "EHelpSignalTriggerCause.generated.h"

UENUM()
enum class EHelpSignalTriggerCause {
    Striked,
    StructureBroken,
    Pushed,
    KnockedDown,
    Dizzy,
    PushedFromGrab,
    Count,
    None,
};


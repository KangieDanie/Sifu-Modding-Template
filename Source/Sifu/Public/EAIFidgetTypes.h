#pragma once
#include "CoreMinimal.h"
#include "EAIFidgetTypes.generated.h"

UENUM()
enum class EAIFidgetTypes : uint8 {
    Idle,
    JoinDialog,
    Confrontation,
    Combat,
    NearDeath,
    Count,
    None,
};


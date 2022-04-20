#pragma once
#include "CoreMinimal.h"
#include "ERagingBullPhase.generated.h"

UENUM(BlueprintType)
enum class ERagingBullPhase : uint8 {
    Entry,
    Loop,
    Exit,
    Count,
};


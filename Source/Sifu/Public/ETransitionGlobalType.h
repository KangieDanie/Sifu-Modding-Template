#pragma once
#include "CoreMinimal.h"
#include "ETransitionGlobalType.generated.h"

UENUM()
enum class ETransitionGlobalType : uint8 {
    Start,
    Stop,
    UTurn,
    Landing,
    TurnInPlace,
    Count,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "EFirstSpawnMethod.generated.h"

UENUM()
enum class EFirstSpawnMethod : uint8 {
    AtTheBeginning,
    WithATimer,
    OnAnEvent,
    Count,
    Invalid,
};


#pragma once
#include "CoreMinimal.h"
#include "ETraversalEntryType.generated.h"

UENUM(BlueprintType)
enum class ETraversalEntryType : uint8 {
    None,
    Above,
    Below,
    Climb,
    Cine,
    Push,
    PushClose,
    DropDown,
    Count,
};


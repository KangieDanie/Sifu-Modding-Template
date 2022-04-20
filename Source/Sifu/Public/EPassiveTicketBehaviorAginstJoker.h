#pragma once
#include "CoreMinimal.h"
#include "EPassiveTicketBehaviorAginstJoker.generated.h"

UENUM()
enum class EPassiveTicketBehaviorAginstJoker : uint8 {
    IgnoreAllJokers,
    FailWhenAnyJokerActive,
    TryCancelCurrentAttacksOnly,
};


#pragma once
#include "CoreMinimal.h"
#include "EActivityPendingStateUpdate.generated.h"

UENUM()
enum class EActivityPendingStateUpdate {
    Enabling,
    Starting,
    Ending,
    Reset,
};


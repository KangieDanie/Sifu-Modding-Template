#pragma once
#include "CoreMinimal.h"
#include "EOrderEvent.generated.h"

UENUM()
enum class EOrderEvent {
    Starting,
    Started,
    Ending,
    Ended,
};


#pragma once
#include "CoreMinimal.h"
#include "ComboTraceElementType.generated.h"

UENUM()
enum class ComboTraceElementType {
    NodeRoot,
    NodeAttack,
    NodeRedirect,
    Condition,
    ProbaTransition,
    Conduit,
    None,
};


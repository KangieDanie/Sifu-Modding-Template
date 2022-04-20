#pragma once
#include "CoreMinimal.h"
#include "EAIPhaseNodeType.generated.h"

UENUM()
enum class EAIPhaseNodeType : int32 {
    None,
    Death,
    Abandon,
};


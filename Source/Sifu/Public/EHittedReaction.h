#pragma once
#include "CoreMinimal.h"
#include "EHittedReaction.generated.h"

UENUM(BlueprintType)
enum class EHittedReaction : uint8 {
    Hit,
    Action,
    None,
};


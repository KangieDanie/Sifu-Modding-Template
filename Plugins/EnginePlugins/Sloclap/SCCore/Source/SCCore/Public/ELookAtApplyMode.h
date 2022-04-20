#pragma once
#include "CoreMinimal.h"
#include "ELookAtApplyMode.generated.h"

UENUM(BlueprintType)
enum class ELookAtApplyMode : uint8 {
    Additive,
    Procedural_Spine,
    Procedural_Head,
    None,
    Default,
};


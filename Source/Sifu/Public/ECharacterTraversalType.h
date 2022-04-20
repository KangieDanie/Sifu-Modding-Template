#pragma once
#include "CoreMinimal.h"
#include "ECharacterTraversalType.generated.h"

UENUM(BlueprintType)
enum class ECharacterTraversalType : uint8 {
    Locomotion,
    Attack,
    Evasion,
    Push,
};


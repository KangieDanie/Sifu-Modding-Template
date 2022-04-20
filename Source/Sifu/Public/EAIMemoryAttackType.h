#pragma once
#include "CoreMinimal.h"
#include "EAIMemoryAttackType.generated.h"

UENUM()
enum class EAIMemoryAttackType : uint8 {
    AttackLaunched,
    AttackReceived,
};


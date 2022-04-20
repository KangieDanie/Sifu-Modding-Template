#pragma once
#include "CoreMinimal.h"
#include "EInputMappingCompatibilityRuleType.generated.h"

UENUM()
enum class EInputMappingCompatibilityRuleType : int32 {
    CompatibleOnlyWith,
    IncompatibleOnlyWith,
};


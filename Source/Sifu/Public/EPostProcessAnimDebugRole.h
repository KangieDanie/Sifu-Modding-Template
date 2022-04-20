#pragma once
#include "CoreMinimal.h"
#include "EPostProcessAnimDebugRole.generated.h"

UENUM(BlueprintType)
enum class EPostProcessAnimDebugRole : uint8 {
    Master,
    Dummy,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "ECameraMirrorManagementType.generated.h"

UENUM(BlueprintType)
enum class ECameraMirrorManagementType : uint8 {
    UseSpring,
    UseBlender,
    DirectValue,
    Count,
    None,
};


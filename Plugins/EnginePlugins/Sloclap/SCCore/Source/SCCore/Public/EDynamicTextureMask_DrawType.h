#pragma once
#include "CoreMinimal.h"
#include "EDynamicTextureMask_DrawType.generated.h"

UENUM(BlueprintType)
enum class EDynamicTextureMask_DrawType : uint8 {
    DT_Additive,
    DT_OpaqueColor,
    DT_OpaqueAlpha,
    DT_MAX UMETA(Hidden),
};


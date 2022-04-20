#pragma once
#include "CoreMinimal.h"
#include "EDynamicTextureMask_DrawShape.generated.h"

UENUM(BlueprintType)
enum class EDynamicTextureMask_DrawShape : uint8 {
    DS_Sphere,
    DS_Capsule,
    DS_TextureProjection_Standard,
    DS_TextureProjection_Atlas,
    DS_MAX UMETA(Hidden),
};


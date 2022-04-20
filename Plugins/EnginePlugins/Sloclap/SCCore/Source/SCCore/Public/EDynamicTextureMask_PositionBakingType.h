#pragma once
#include "CoreMinimal.h"
#include "EDynamicTextureMask_PositionBakingType.generated.h"

UENUM(BlueprintType)
enum class EDynamicTextureMask_PositionBakingType : uint8 {
    PBT_SimpleStaticMesh,
    PBT_ComplexSkeletalMesh,
    PBT_SimpleSkeletalMesh,
    PBT_MAX UMETA(Hidden),
};


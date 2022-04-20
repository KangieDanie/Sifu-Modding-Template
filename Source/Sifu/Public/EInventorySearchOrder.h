#pragma once
#include "CoreMinimal.h"
#include "EInventorySearchOrder.generated.h"

UENUM()
enum class EInventorySearchOrder : uint8 {
    EquippedFirst,
    MentoringItemFirst,
    AcquisitionDate,
    Weight,
    DamageBluntReduce,
    DamageCutReduce,
    FragmentCost,
    PrestigePointCost,
    Name,
    None,
    Count,
};


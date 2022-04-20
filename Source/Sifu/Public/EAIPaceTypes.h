#pragma once
#include "CoreMinimal.h"
#include "EAIPaceTypes.generated.h"

UENUM()
enum class EAIPaceTypes {
    CloseToEnemy,
    FarFromEnemy,
    Attacking,
    Count,
};


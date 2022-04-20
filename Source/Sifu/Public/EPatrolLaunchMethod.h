#pragma once
#include "CoreMinimal.h"
#include "EPatrolLaunchMethod.generated.h"

UENUM()
enum class EPatrolLaunchMethod : uint8 {
    AtSpawn,
    OnAnEvent,
};


#pragma once
#include "CoreMinimal.h"
#include "EPatrolType.generated.h"

UENUM()
enum class EPatrolType : uint8 {
    Loop,
    PingPong,
    Once,
};


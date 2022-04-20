#pragma once
#include "CoreMinimal.h"
#include "ESnapType.generated.h"

UENUM()
enum class ESnapType {
    NoOvershoot,
    Linear,
    Stretched,
};


#pragma once
#include "CoreMinimal.h"
#include "EUpdateTargetCondition.generated.h"

UENUM()
enum class EUpdateTargetCondition : uint8 {
    Alway,
    WhenTargetConditionFail,
};


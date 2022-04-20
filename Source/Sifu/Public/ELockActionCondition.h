#pragma once
#include "CoreMinimal.h"
#include "ELockActionCondition.generated.h"

UENUM()
enum class ELockActionCondition : uint8 {
    Yes,
    IfNoNMENearMe,
    No,
};


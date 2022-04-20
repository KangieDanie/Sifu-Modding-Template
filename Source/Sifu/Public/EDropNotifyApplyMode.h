#pragma once
#include "CoreMinimal.h"
#include "EDropNotifyApplyMode.generated.h"

UENUM()
enum class EDropNotifyApplyMode : uint8 {
    OnSelf,
    OnCurrentTarget,
};


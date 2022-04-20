#pragma once
#include "CoreMinimal.h"
#include "EThrowObjectActionType.generated.h"

UENUM()
enum class EThrowObjectActionType : uint8 {
    ObjectPickedUp,
    ObjectOnGround,
};


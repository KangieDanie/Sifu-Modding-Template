#pragma once
#include "CoreMinimal.h"
#include "EActivityType.generated.h"

UENUM(BlueprintType)
enum class EActivityType : uint8 {
    Activity,
    Task,
    SubTask,
};


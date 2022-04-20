#pragma once
#include "CoreMinimal.h"
#include "ENullableCondition.generated.h"

UENUM(BlueprintType)
enum class ENullableCondition : uint8 {
    Yes,
    No,
    Ignore,
};


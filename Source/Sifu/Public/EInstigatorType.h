#pragma once
#include "CoreMinimal.h"
#include "EInstigatorType.generated.h"

UENUM(BlueprintType)
enum class EInstigatorType : uint8 {
    Item,
    Character,
    Fall,
};


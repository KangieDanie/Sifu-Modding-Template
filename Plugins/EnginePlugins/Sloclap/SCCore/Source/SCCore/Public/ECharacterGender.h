#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.generated.h"

UENUM(BlueprintType)
enum class ECharacterGender : uint8 {
    Man,
    Woman,
    Count,
    None,
};


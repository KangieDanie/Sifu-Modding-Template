#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructAttack.h"
#include "NetOrderStructUseMovable.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FNetOrderStructUseMovable : public FNetOrderStructAttack {
    GENERATED_BODY()
public:
    FNetOrderStructUseMovable();
};


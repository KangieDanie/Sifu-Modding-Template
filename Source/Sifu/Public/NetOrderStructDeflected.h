#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructDeflected.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructDeflected : public FNetOrderStruct {
    GENERATED_BODY()
public:
    SIFU_API FNetOrderStructDeflected();
};


#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructCancel.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructCancel : public FNetOrderStruct {
    GENERATED_BODY()
public:
    SIFU_API FNetOrderStructCancel();
};


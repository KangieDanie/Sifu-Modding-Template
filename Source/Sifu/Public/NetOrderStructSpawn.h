#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructSpawn.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructSpawn : public FNetOrderStruct {
    GENERATED_BODY()
public:
    SIFU_API FNetOrderStructSpawn();
};


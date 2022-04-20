#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "FallOnSlopeSetup.h"
#include "NetOrderStructFallOnSlope.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFallOnSlope : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FFallOnSlopeSetup m_Setup;
    
    SIFU_API FNetOrderStructFallOnSlope();
};


#pragma once
#include "CoreMinimal.h"
#include "SpeedStateBlendDescription.h"
#include "SpeedStateBlendTo.generated.h"

USTRUCT(BlueprintType)
struct FSpeedStateBlendTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSpeedStateBlendDescription m_BlendDescription[4];
    
    SIFU_API FSpeedStateBlendTo();
};


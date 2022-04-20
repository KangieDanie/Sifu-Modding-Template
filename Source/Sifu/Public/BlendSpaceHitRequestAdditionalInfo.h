#pragma once
#include "CoreMinimal.h"
#include "HitRequestAdditionalInfo.h"
#include "BlendSpaceHitRequestAdditionalInfo.generated.h"

USTRUCT()
struct SIFU_API FBlendSpaceHitRequestAdditionalInfo : public FHitRequestAdditionalInfo {
    GENERATED_BODY()
public:
    FBlendSpaceHitRequestAdditionalInfo();
};


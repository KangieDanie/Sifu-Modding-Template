#pragma once
#include "CoreMinimal.h"
#include "AIAttackHitDetectionCone.h"
#include "AIAttackHitDetectionVolume.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackHitDetectionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAIAttackHitDetectionCone> m_RangedCones;
    
    SIFU_API FAIAttackHitDetectionVolume();
};


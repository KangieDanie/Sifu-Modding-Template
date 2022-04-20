#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "AIAttackHitDetectionCone.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackHitDetectionCone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_fRange;
    
    UPROPERTY(EditAnywhere)
    float m_fAngle;
    
    SIFU_API FAIAttackHitDetectionCone();
};


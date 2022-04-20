#pragma once
#include "CoreMinimal.h"
#include "PropertyReactionHit.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPropertyReactionHit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fHittedDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_HittedDynamic;
    
    UPROPERTY(EditAnywhere)
    float m_fHittedKnockBackDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fHittedToStateBlendDuration;
    
    SIFU_API FPropertyReactionHit();
};


#pragma once
#include "CoreMinimal.h"
#include "FrameRange.h"
#include "ChargedOverridingHitBox.h"
#include "ChargedCap.generated.h"

USTRUCT(BlueprintType)
struct FChargedCap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FChargedOverridingHitBox> m_HitBoxes;
    
    SIFU_API FChargedCap();
};


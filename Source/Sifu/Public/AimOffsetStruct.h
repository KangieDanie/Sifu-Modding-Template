#pragma once
#include "CoreMinimal.h"
#include "AimOffsetStruct.generated.h"

class UAimOffsetBlendSpace;

USTRUCT(BlueprintType)
struct FAimOffsetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAimOffsetBlendSpace* m_aimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bMirror;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxHeadDiffYaw;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxHeadDiffPitch;
    
    SIFU_API FAimOffsetStruct();
};


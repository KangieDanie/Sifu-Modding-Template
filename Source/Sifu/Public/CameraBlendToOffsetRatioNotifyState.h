#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CameraBlendToOffsetRatioNotifyState.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UCameraBlendToOffsetRatioNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fTargetRatio;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_BlendCurve;
    
public:
    UCameraBlendToOffsetRatioNotifyState();
};


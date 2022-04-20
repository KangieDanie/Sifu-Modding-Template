#pragma once
#include "CoreMinimal.h"
#include "CameraMixerBlender.h"
#include "SpringCameraMixerBlender.generated.h"

class UCameraComponentThird;

UCLASS(Abstract)
class SIFU_API USpringCameraMixerBlender : public UCameraMixerBlender {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fSpeedFactor;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetTargetRatio(UCameraComponentThird* _camera) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetSpeedFactor(UCameraComponentThird* _camera, float _fTargetRatio, float _fOldRatio) const;
    
    USpringCameraMixerBlender();
};


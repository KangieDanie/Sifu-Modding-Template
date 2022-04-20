#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "CameraMixerBlender.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraMixerBlender : public UObject {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintNativeEvent)
    float BPE_EvaluateBlendRatio(UCameraComponentThird* _camera, float _fDt, float _fOldRatio, bool _bNoDamping) const;
    
public:
    UCameraMixerBlender();
};


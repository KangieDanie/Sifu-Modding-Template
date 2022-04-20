#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "CameraTransitionEvent.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraTransitionEvent : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveLaunchEvent(UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fBlendRatio) const;
    
    UCameraTransitionEvent();
};


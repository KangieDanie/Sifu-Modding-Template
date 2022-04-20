#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "CameraDataModifier.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraDataModifier : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReceiveOnStop(UCameraComponentThird* _cameraComponent) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReceiveOnStart(UCameraComponentThird* _cameraComponent) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReceiveOnProcess(UCameraComponentThird* _cameraComponent, float _fDt) const;
    
    UCameraDataModifier();
};


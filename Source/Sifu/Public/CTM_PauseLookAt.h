#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionModule.h"
#include "CTM_PauseLookAt.generated.h"

class UCameraComponentThird;

UCLASS()
class SIFU_API UCTM_PauseLookAt : public UCameraTransitionModule {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_CanLaunchPauseLookAt(UCameraComponentThird* _cameraComponent) const;
    
    UCTM_PauseLookAt();
};


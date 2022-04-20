#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionModule.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CTM_LookAt.generated.h"

class UCameraComponentThird;

UCLASS()
class SIFU_API UCTM_LookAt : public UCameraTransitionModule {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    FVector BPE_GetPositionToLook(UCameraComponentThird* _cameraComponent) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_CanLaunchLookAt(UCameraComponentThird* _cameraComponent) const;
    
    UCTM_LookAt();
};


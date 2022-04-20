#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfo.h"
#include "BlendInLockCameraTransitionInfo.generated.h"

UCLASS()
class SIFU_API UBlendInLockCameraTransitionInfo : public UCameraTransitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseDefaultTargetReachDurationAsFallback;
    
    UBlendInLockCameraTransitionInfo();
};


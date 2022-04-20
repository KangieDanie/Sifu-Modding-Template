#pragma once
#include "CoreMinimal.h"
#include "CameraRepulsionConfigElement.h"
#include "CameraRepulsionConfig.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCameraRepulsionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fRepulsionSleepTimerAfterManualCam;
    
    UPROPERTY(EditAnywhere)
    TArray<FCameraRepulsionConfigElement> m_RepulsionsElements;
    
    UPROPERTY(EditAnywhere)
    float m_fDeadZoneHidingTargetPositionSpringSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fCollidingDeadZoneExtraAngleOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fLookAtYawDampingValueThisFrameToDisableRepulsion;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionRailRatioToActivateRepulsionFromCollidingDeadZone;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseMergedDeadZonesWhenRepulsingFromOnlyHidingZone;
    
    FCameraRepulsionConfig();
};


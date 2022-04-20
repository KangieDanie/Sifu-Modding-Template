#pragma once
#include "CoreMinimal.h"
#include "ECameraTrackingMode.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector4
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CameraNodeStruct.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraNodeStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECameraTrackingMode m_eTrackingTranslationMode;
    
    UPROPERTY(EditAnywhere)
    ECameraTrackingMode m_eTrackingRotationMode;
    
    UPROPERTY(EditAnywhere)
    FVector4 m_vFulcrumOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_bDynamicFulcrumOffsetEnabled;
    
    UPROPERTY(EditAnywhere)
    FVector4 m_vSafeOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseAboveIdealOffset;
    
    UPROPERTY(EditAnywhere)
    FVector m_vAboveIdealOffset;
    
    UPROPERTY(EditAnywhere)
    FVector4 m_vIdealOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseBelowIdealOffset;
    
    UPROPERTY(EditAnywhere)
    FVector m_vBelowIdealOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsCollisionEnabled;
    
    UPROPERTY(EditAnywhere)
    float m_fFov;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsFovVertical;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowAnimDrivenFov;
    
    UPROPERTY(EditAnywhere)
    bool m_bFovFromPreviousCameraData;
    
    UPROPERTY(EditAnywhere)
    bool m_bSnapRefLocation;
    
    UPROPERTY(EditAnywhere)
    float m_fRefDampingFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fCoolDownAfterManualCameraTouch;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowComfortService;
    
    UPROPERTY(EditAnywhere)
    float m_fHorizontalSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fVerticalSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_bFixedYaw;
    
    UPROPERTY(EditAnywhere)
    bool m_bFixedPitch;
    
    UPROPERTY(EditAnywhere)
    bool m_bFixedRoll;
    
    UPROPERTY(EditAnywhere)
    float m_fFixedYaw;
    
    UPROPERTY(EditAnywhere)
    float m_fFixedPitch;
    
    UPROPERTY(EditAnywhere)
    float m_fFixedRoll;
    
    UPROPERTY(EditAnywhere)
    float m_fAboveLimitPitch;
    
    UPROPERTY(EditAnywhere)
    float m_fBelowLimitPitch;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_curveCameraShakeFactorByDistToOwner;
    
    UPROPERTY(EditAnywhere)
    bool m_bFollow;
    
    UPROPERTY(EditAnywhere)
    float m_fFollowPitchOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fFollowPitchDampingFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fFollowPitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_followYawDampingFactorCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fFollowWakeUpMaxPitchDiffAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fFollowWakeUpMaxYawDiffAngle;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsCamOverTheShoulderDisabled;
    
    UPROPERTY()
    bool m_bLockOnTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fLockOnTargetWakeUpMaxPitchDiffAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fLockOnTargetWakeUpMaxYawDiffAngle;
    
    UPROPERTY()
    bool m_bLockFollowing;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingWakeUpMaxPitchDiffAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingWakeUpMaxYawDiffAngle;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockFramingContainer;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFraimingContainerDeadZonenCenterX;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFraimingContainerDeadZonenCenterY;
    
    UPROPERTY(EditAnywhere)
    float m_fScreenPercentSoftEdgeX;
    
    UPROPERTY(EditAnywhere)
    float m_fScreenPercentSoftEdgeY;
    
    UPROPERTY(EditAnywhere)
    float m_fScreenPercentHardEdgeX;
    
    UPROPERTY(EditAnywhere)
    float m_fScreenPercentHardEdgeY;
    
    UPROPERTY(EditAnywhere)
    float m_fMinRangeDistanceToOwner;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxRangeDistanceToOwner;
    
    UPROPERTY(EditAnywhere)
    float m_fDistanceDampingFactor;
    
    UPROPERTY(EditAnywhere)
    bool m_bCameraFramingLerpOnDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fHeightAboveOwner;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraFramingHeightDampingFactor;
    
    UPROPERTY(EditAnywhere)
    bool m_bCameraFramingLerpOnHeight;
    
    UPROPERTY(EditAnywhere)
    bool m_bUsePitchAtRest;
    
    UPROPERTY(EditAnywhere)
    bool m_bPitchAtRestComputationMethodSlope;
    
    UPROPERTY(EditAnywhere)
    bool m_bPitchAtRestComputationMethodTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bPitchAtRestComputationMethodTargetThenSlope;
    
    UPROPERTY(EditAnywhere)
    float m_fPitchAtRestSprintSpeedValue;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PitchAtRestValuePerSlopeAngle;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PitchAtRestOffsetPerSafeZoneSize;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PitchAtRestOffsetFactorByDistToTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fPitchAtRestOffsetSpringSpeedValue;
    
    UPROPERTY(EditAnywhere)
    float m_fPitchAtRestWakeUpMaxPitchDiffAngle;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseAboveHeadIdealOffset;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_AboveHeadIdealOffsetOffsetPerSafeZoneSize;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_AboveHeadIdealOffsetFactorByDistToTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fAboveHeadIdealOffsetSpringSpeedValue;
    
    UPROPERTY(EditAnywhere)
    bool m_bAboveHeadIdealOffsetApplyOnAbove;
    
    UPROPERTY(EditAnywhere)
    bool m_bAboveHeadIdealOffsetApplyOnBelow;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseRepulsionFromDeadZone;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeMirrored;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCameraSideCollisionMirror;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCameraCombatMirrorService;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraCombatMirrorCursorAvoidRangeAroundMiddle;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraCombatMirrorCursorAvoidRangeMinRailCollisionRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraCombatMirrorCursorAvoidRangeMinCamDist;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CombatMirrorWeightWhiskerCastByAngularDistToRight;
    
    UPROPERTY()
    float m_fCombatMirrorCachedAngleDistAtWeightZero;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CameraCombatMirrorProjRemapNotInMirror;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CameraCombatMirrorSideTraceDistRatioRemap;
    
    UPROPERTY(EditAnywhere)
    float m_fCombatMirrorProjSpringSpeedInsideCollisionBoundary;
    
    UPROPERTY(EditAnywhere)
    float m_fCombatMirrorProjSpringSpeedOutsideCollisionBoundary;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowCameraLookAtToExtractCollision;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowDodgeToTriggerMirrorChange;
    
    FCameraNodeStruct();
};


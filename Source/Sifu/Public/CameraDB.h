#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CameraRepulsionConfig.h"
#include "CameraLookAtServiceBehaviorTime.h"
#include "CameraLookAtServiceBehaviorConfig.h"
#include "CameraSafePointPlacement.h"
#include "CameraSafePointConditionalPlacement.h"
#include "CameraDB.generated.h"

class UBehaviorTree;
class UAbstractCameraData;
class UCurveFloat;
class UCameraTransitionInfo;

UCLASS(BlueprintType)
class SIFU_API UCameraDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UBehaviorTree* m_BehaviorTreeAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UAbstractCameraData* m_CameraDataDefault;
    
    UPROPERTY(EditAnywhere)
    float m_fUnlockOnPlaceCompensationTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_OrientationDampingFromDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_NearOrientationDampingFromDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_OrientationDampingCurveRatioFromDist;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PitchDampingFromDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PitchNearOrientationDampingFromDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_PitchOrientationDampingCurveRatioFromDist;
    
    UPROPERTY(EditAnywhere)
    float m_fLockManualControlCooldownDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_weightFromDistCurve;
    
    UPROPERTY(EditAnywhere)
    float m_fLookAtDurationUnderneathSequence;
    
    UPROPERTY(EditAnywhere)
    FCameraLookAtServiceBehaviorTime m_lookAtBehaviorTimeRelated1V1;
    
    UPROPERTY(EditAnywhere)
    FCameraLookAtServiceBehaviorConfig m_lookAtBehavior1V1;
    
    UPROPERTY(EditAnywhere)
    FCameraLookAtServiceBehaviorTime m_lookAtBehaviorTimeRelated1VN;
    
    UPROPERTY(EditAnywhere)
    FCameraLookAtServiceBehaviorConfig m_lookAtBehavior1VN;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiTargetableBehaviorMask;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_LockFollowYawDampingFactorByAngleDelta;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_followingYawDampingFactorFromVelocity;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingDampingInCollision;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingCollisionAngleOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingPitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingPitchOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingPitchDampingFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingMaxAngleToResume;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingMinDeltaCamPlayerToFreezeOrientation;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingMinDeltaCamPlayerToFreezeOrientationNoInput;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingMinDeltaInputToUnfreezeOrientation;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingRotationChangeThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bLockFollowingResumeIfNoInput;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFollowingManualControlCooldownDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fLockFramingAimZOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fDurationAfterManualControlToGetBackToRegularPos;
    
    UPROPERTY(EditAnywhere)
    float m_fSpringSpeedFactorForCameraPosition;
    
    UPROPERTY(EditAnywhere)
    float m_fOffsetAngleToGetOutOfCollisionFromDeadZone;
    
    UPROPERTY(EditAnywhere)
    uint8 m_uiCameraPoolNumber[4];
    
    UPROPERTY(EditAnywhere)
    UCameraTransitionInfo* m_DefaultTransition;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionDampingFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionSphereMarginFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fSoftCollisionDistanceAllowedInsideWall;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionDeadEndAngle;
    
    UPROPERTY(EditAnywhere)
    int32 m_iDetectionRaycastCount;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionDetectionDistance;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_maxRaycastDistCoeffByMinDist;
    
    UPROPERTY(EditAnywhere)
    float m_fRaycastStartZOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fRaycastAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fFalsePositiveSafeZoneMaxAngle;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseSpringForReturningToFurtherCollision;
    
    UPROPERTY(EditAnywhere)
    float m_fSpringSpeedForReturningToFurtherCollision;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableSafePoint;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_safePointRatioFromDeadZoneMinDist;
    
    UPROPERTY(EditAnywhere)
    float m_fSafePointDampingSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_fSafePointBlendOutDuration;
    
    UPROPERTY(EditAnywhere)
    FCameraSafePointPlacement m_fSafePointDefaultPlacement;
    
    UPROPERTY(EditAnywhere)
    TArray<FCameraSafePointConditionalPlacement> m_fSafePointConditionalPlacement;
    
    UPROPERTY(EditAnywhere)
    FCameraRepulsionConfig m_RepulsionConfig1v1;
    
    UPROPERTY(EditAnywhere)
    FCameraRepulsionConfig m_RepulsionConfig1vN;
    
    UPROPERTY(EditAnywhere)
    float m_fRepulsionAngleDiffToBeConsideredInsideSafeZone;
    
    UPROPERTY(EditAnywhere)
    float m_fRepulsionTargetAngleDiffMax;
    
    UPROPERTY(EditAnywhere)
    float m_fFulcrumOffsetDampingFactorEnabled;
    
    UPROPERTY(EditAnywhere)
    float m_fFulcrumOffsetDampingFactorDisabled;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_fFulcrumOffsetRatioToMaxDistByBissectorRatio;
    
    UPROPERTY(EditAnywhere)
    float m_fFulcrumOffsetDistanceRatioOutside;
    
    UPROPERTY(EditAnywhere)
    bool m_bFulcrumOffsetOrientateCamera;
    
    UPROPERTY(EditAnywhere)
    float m_fFulcrumOffsetCameraOrientationBlendDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fFulcrumOffsetMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fFollowRotationChangeThreshold;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_followingPitchMulitplierFromDeltaYaw;
    
    UPROPERTY(EditAnywhere)
    float m_fMinDeltaCamPlayerToFreezeOrientation;
    
    UPROPERTY(EditAnywhere)
    float m_fMinDeltaInputToUnfreezeOrientation;
    
    UPROPERTY(EditAnywhere)
    float m_fCooldownReturnToRestAfterLookAtWithPitch;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_SideTraceDistRatioRemap;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_BothSideColRatioRemap;
    
    UPROPERTY(EditAnywhere)
    float m_fSideTraceMirrorCursorAvoidRangeAroundMiddle;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionSideSpeedFactorGoingOpposite;
    
    UPROPERTY(EditAnywhere)
    float m_fCollisionSideSpeedFactorGoingOnTheSameSide;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxTargetDistanceToBeConsideredByMirrorFar;
    
    UPROPERTY(EditAnywhere)
    float m_fMirrorDistSideMax;
    
    UPROPERTY(EditAnywhere)
    float m_fMirrorFarExtraDistanceInPushedState;
    
    UPROPERTY(EditAnywhere)
    float m_fMirrorFarExtraDistanceInDownState;
    
    UPROPERTY(EditAnywhere)
    float m_fMeleeAngleToUseCamForwardDirToTargetToChangeMirror;
    
    UCameraDB();
};


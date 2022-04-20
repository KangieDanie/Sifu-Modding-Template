#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "CameraLookAtServiceBehaviorConfig.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraLookAtServiceBehaviorConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bLookAtUsePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bLookAtUseYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseForcePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fForcePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseForceYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fForceYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bStayLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bDeactivateOnManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinYawDiffAbsoluteToCancelLookAtLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseYawDampingBasedOnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseRepulsionAngleToComputeYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bRelaunchLookAtIfYawDampingNonZeroAgain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_YawOrientationDampingFromDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_YawNearOrientationDampingFromDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_YawOrientationDampingCurveRatioFromDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUsePitchDampingBasedOnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_PitchOrientationDampingFromDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_PitchNearOrientationDampingFromDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_PitchOrientationDampingCurveRatioFromDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUsePitchComputedWithSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_PitchValuePerSlopeAngleMinDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_PitchValuePerSlopeAngleMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange m_PitchWithSlopeRangeMinMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bTeleportPointComputation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseCollisionAnticipationCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUsePositionToLockDamping;
    
    UPROPERTY(EditAnywhere)
    float m_fTargetPosDampingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUsePositionZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLookAtUpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUsePositionRatio;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fPositionRatioToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fPositionRatioDistanceMaxToComputeRatioForLockRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fPositionRatioLockDistMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fPositionRatioLockDistMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fPositionRatioLookAtUpOffsetCompensation;
    
    FCameraLookAtServiceBehaviorConfig();
};


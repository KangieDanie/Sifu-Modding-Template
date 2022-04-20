#include "CameraLookAtServiceBehaviorConfig.h"

FCameraLookAtServiceBehaviorConfig::FCameraLookAtServiceBehaviorConfig() {
    this->m_bLookAtUsePitch = false;
    this->m_bLookAtUseYaw = false;
    this->m_bUseForcePitch = false;
    this->m_fForcePitch = 0.00f;
    this->m_bUseForceYaw = false;
    this->m_fForceYaw = 0.00f;
    this->m_bStayLock = false;
    this->m_bDeactivateOnManual = false;
    this->m_fMinYawDiffAbsoluteToCancelLookAtLaunch = 0.00f;
    this->m_bUseYawDampingBasedOnDistance = false;
    this->m_bUseRepulsionAngleToComputeYaw = false;
    this->m_bRelaunchLookAtIfYawDampingNonZeroAgain = false;
    this->m_YawOrientationDampingFromDistanceCurve = NULL;
    this->m_YawNearOrientationDampingFromDistanceCurve = NULL;
    this->m_YawOrientationDampingCurveRatioFromDist = NULL;
    this->m_bUsePitchDampingBasedOnDistance = false;
    this->m_PitchOrientationDampingFromDistanceCurve = NULL;
    this->m_PitchNearOrientationDampingFromDistanceCurve = NULL;
    this->m_PitchOrientationDampingCurveRatioFromDist = NULL;
    this->m_bUsePitchComputedWithSlope = false;
    this->m_PitchValuePerSlopeAngleMinDist = NULL;
    this->m_PitchValuePerSlopeAngleMaxDist = NULL;
    this->m_bTeleportPointComputation = false;
    this->m_bUseCollisionAnticipationCorrection = false;
    this->m_bUsePositionToLockDamping = false;
    this->m_fTargetPosDampingValue = 0.00f;
    this->m_bUsePositionZOffset = false;
    this->m_fLookAtUpOffset = 0.00f;
    this->m_bUsePositionRatio = false;
    this->m_fPositionRatioToTarget = 0.00f;
    this->m_fPositionRatioDistanceMaxToComputeRatioForLockRange = 0.00f;
    this->m_fPositionRatioLockDistMin = 0.00f;
    this->m_fPositionRatioLockDistMax = 0.00f;
    this->m_fPositionRatioLookAtUpOffsetCompensation = 0.00f;
}


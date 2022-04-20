#include "BaseMovementDB.h"

float UBaseMovementDB::BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UBaseMovementDB::BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UBaseMovementDB::BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

UBaseMovementDB::UBaseMovementDB() {
    this->m_DetailedMoveTransitionDB = NULL;
    this->m_TransitionAnimRequest = NULL;
    this->m_fRushMoveAnimSpeed = 650.00f;
    this->m_fRushMoveOverallStretchFactor = 1.00f;
    this->m_fRushMoveMaxAngularSpeed = 100.00f;
    this->m_fRushMoveTransitionMaxAngularSpeed = 100.00f;
    this->m_fRushStaminaConsumptionRate = 10.00f;
    this->m_RushStaminaConsumptionOverWeightRatio = NULL;
    this->m_fRushCooldownBurnAllStamina = 4.00f;
    this->m_fWantToRushInLockMoveTimeOut = 0.30f;
    this->m_bSwitchToExploOnLongRush = false;
    this->m_fRushDurationToExplo = 0.00f;
    this->m_bAuthorizeMirroring = true;
    this->m_fLockMoveOverallStretchFactor = 1.00f;
    this->m_fFreeMoveV1AnimSpeed = 100.00f;
    this->m_fFreeMoveV1OverallStretchFactor = 1.00f;
    this->m_fFreeMoveV2AnimSpeed = 350.00f;
    this->m_fFreeMoveV2OverallStretchFactor = 1.00f;
    this->m_fFreeMoveMaxAngularSpeed = 500.00f;
    this->m_fFreeMoveTransitionMaxAngularSpeed = 500.00f;
    this->m_uiLookAtLockMoveTargetAllowedPerAlertLevelMask = 4294967295;
    this->m_fAnimNorthSpeed = 220.00f;
    this->m_fAnimSouthSpeed = 220.00f;
    this->m_fAnimEastSpeed = 220.00f;
    this->m_fAnimWestSpeed = 220.00f;
    this->m_fLockMoveMaxAngularSpeed = 300.00f;
    this->m_fLockMoveTransitionMaxAngularSpeed = 300.00f;
    this->m_fV3LandingVelocityThreshold = 400.00f;
    this->m_fV2LandingVelocityThreshold = 170.00f;
    this->m_fV1LandingVelocityThreshold = 10.00f;
    this->m_fV3ActionToLocomotionSpeedThreshold = 400.00f;
    this->m_fV2ActionToLocomotionSpeedThreshold = 170.00f;
    this->m_fV1ActionToLocomotionSpeedThreshold = 10.00f;
    this->m_fActionToLocomotionBlendDuration = 0.50f;
    this->m_eActionToLocomotionBlendType = ESCBlendType::CubicInOut;
    this->m_WeightCategoryMobilityRatios[0] = 0.00f;
    this->m_WeightCategoryMobilityRatios[1] = 0.00f;
    this->m_WeightCategoryMobilityRatios[2] = 0.00f;
    this->m_WeightCategoryMobilityRatios[3] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[0] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[1] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[2] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[3] = 0.00f;
    this->m_bOverweightImpactFreemoveState = false;
    this->m_LockMoveVelocityLerpCurve = NULL;
    this->m_FreeMoveVelocityLerpCurves[0] = NULL;
    this->m_FreeMoveVelocityLerpCurves[1] = NULL;
    this->m_FreeMoveVelocityLerpCurves[2] = NULL;
    this->m_FreeMoveVelocityLerpCurves[3] = NULL;
    this->m_RotationSpeedMultiplierByTime = NULL;
    this->m_bEnableTransitions = false;
    this->m_fMaxStrafeDeltaAngle = 15.00f;
    this->m_fStartInterruptFirstStepRatio = 0.50f;
    this->m_bFreeMoveEnableAnimTransitions = true;
    this->m_bFreeMoveEnablePivotFoot = true;
    this->m_bLockMoveEnableAnimTransitions = false;
    this->m_bLockMoveEnablePivotFoot = false;
    this->m_EnableInputStabilisationOnMove = false;
    this->m_EnableSpeedBlender = false;
    this->m_fMaxCoeffToUsePreviousSpeed = 0.30f;
    this->m_fMaxCoeffOrderedToUsePreviousSpeed = 0.80f;
    this->m_uiForceKeepForwardOnStartsByMoveStatus = 0;
    this->m_FreeMovePivotFootParams[0] = NULL;
    this->m_FreeMovePivotFootParams[1] = NULL;
    this->m_FreeMovePivotFootParams[2] = NULL;
    this->m_FreeMovePivotFootParams[3] = NULL;
    this->m_LockMovePivotFootParams = NULL;
    this->m_DodgeDB = NULL;
}


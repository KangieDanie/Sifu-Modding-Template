#include "LookAtAnimHandler.h"

FLookAtAnimHandler::FLookAtAnimHandler() {
    this->m_iAimOffsetIndex = 0;
    this->m_bLookAtEnabled = false;
    this->m_bIsTargetLocationValid = false;
    this->m_bEnableAnimationCompensation = false;
    this->m_fMaxHeadDiffYaw = 0.00f;
    this->m_fMaxHeadDiffPitch = 0.00f;
    this->m_bEyesLookAtSpecificBone = false;
    this->m_eApplyMode = ELookAtApplyMode::Additive;
    this->m_eRefDirMode = ELookAtRefDirMode::ActorForward;
    this->m_fAngleThreshold = 0.00f;
    this->m_fMaxFrontAngle = 0.00f;
    this->m_bLookInCameraDir = false;
    this->m_animRequest = NULL;
    this->m_bInverseValuesOnBoneModifier = false;
    this->m_uiFirstLocalPlayerAIBehavior = 0;
    this->m_fMaxDistFromFirstLocalPlayer = 0.00f;
}


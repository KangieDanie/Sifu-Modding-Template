#include "LookAtAnimInstance.h"

ULookAtAnimInstance::ULookAtAnimInstance() {
    this->m_iAimOffsetIndex = 0;
    this->m_bLookAtEnabled = false;
    this->m_bEnableAnimationCompensation = false;
    this->m_fMaxHeadDiffYaw = 180.00f;
    this->m_fMaxHeadDiffPitch = 90.00f;
    this->m_eApplyMode = ELookAtApplyMode::Additive;
    this->m_eRefDirMode = ELookAtRefDirMode::ActorForward;
    this->m_fAngleThreshold = 0.00f;
    this->m_fMaxFrontAngle = 90.00f;
    this->m_bLookInCameraDir = false;
    this->m_animRequest = NULL;
    this->m_targetPriorities.AddDefaulted(4);
    this->m_bInverseValuesOnBoneModifier = false;
}


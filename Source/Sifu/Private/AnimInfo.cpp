#include "AnimInfo.h"

FAnimInfo::FAnimInfo() {
    this->m_bActionInProgress = false;
    this->m_eWeaponAnimType = EWeaponAnimType::AnimSequence;
    this->m_AnimToPlay = NULL;
    this->m_BlendSpaceToPlay = NULL;
    this->m_fPlayRate = 0.00f;
    this->m_bMirror = false;
    this->m_bWeaponInFakieAtStart = false;
    this->m_fStartRatio = 0.00f;
    this->m_bLoop = false;
    this->m_fBlendSpaceAngle = 0.00f;
    this->m_fOwnerVelocityLength = 0.00f;
}


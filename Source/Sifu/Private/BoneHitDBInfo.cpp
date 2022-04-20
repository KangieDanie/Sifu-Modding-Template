#include "BoneHitDBInfo.h"

FBoneHitDBInfo::FBoneHitDBInfo() {
    this->m_eShapeType = EHitShapeType::None;
    this->m_fHalfHeight = 0.00f;
    this->m_iNumLines = 0;
    this->m_bOneSided = false;
    this->m_fRadius = 0.00f;
    this->m_fCapsuleHalfHeight = 0.00f;
    this->m_fChainHitBoxSpacing = 0.00f;
    this->m_fChainValidDistance = 0.00f;
}


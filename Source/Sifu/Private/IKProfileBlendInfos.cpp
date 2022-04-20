#include "IKProfileBlendInfos.h"

FIKProfileBlendInfos::FIKProfileBlendInfos() {
    this->m_fValueCoef = 0.00f;
    this->m_fBlendInDuration = 0.00f;
    this->m_eBlendInFunction = EEasingFunc::Linear;
    this->m_fBlendOutDuration = 0.00f;
    this->m_eBlendOutFunction = EEasingFunc::Linear;
}


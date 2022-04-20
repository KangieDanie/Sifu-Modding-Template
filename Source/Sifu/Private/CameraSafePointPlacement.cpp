#include "CameraSafePointPlacement.h"

FCameraSafePointPlacement::FCameraSafePointPlacement() {
    this->m_bOrientateTowardsCamForward = false;
    this->m_bUseDeadZoneBissector = false;
    this->m_fSafeZoneAngleOffset = 0.00f;
    this->m_fBlendInTime = 0.00f;
}


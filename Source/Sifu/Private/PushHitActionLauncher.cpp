#include "PushHitActionLauncher.h"

UPushHitActionLauncher::UPushHitActionLauncher() {
    this->m_PushConfiguration = NULL;
    this->m_fallbackHitAction = NULL;
    this->m_fMaxAIWallDistance = 0.00f;
    this->m_filterClass = NULL;
    this->m_bForceAIPushDirection = false;
    this->m_fForcedAILocalDirectionAngle = 0.00f;
}


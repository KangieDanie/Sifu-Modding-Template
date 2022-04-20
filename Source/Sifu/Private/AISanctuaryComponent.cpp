#include "AISanctuaryComponent.h"

UAISanctuaryComponent::UAISanctuaryComponent() {
    this->m_bSanctuaryHasLimitedDuration = false;
    this->m_fSanctuaryDuration = 30.00f;
    this->m_bSendBarkEventWhenSanctuaryIsSafe = true;
}


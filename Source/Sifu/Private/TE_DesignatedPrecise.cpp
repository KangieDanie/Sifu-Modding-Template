#include "TE_DesignatedPrecise.h"

UTE_DesignatedPrecise::UTE_DesignatedPrecise() {
    this->m_eDirectionAction = InputAction::DesignateTarget;
    this->m_fOnScreenToleranceTimeForDesignated = 0.50f;
    this->m_bUseRetrainOnDesignatedToOnScreenTargets = false;
}


#include "CheckTargetStateOrderService.h"

UCheckTargetStateOrderService::UCheckTargetStateOrderService() {
    this->m_bCheckOrder = true;
    this->m_eExpectedTargetCurrentOrder = EOrderType::None;
    this->m_bCheckSnap = true;
    this->m_eCheckSnapOnControllerNature = EControllerNature::AI;
    this->m_fMaxDistFromSnap = 100.00f;
    this->m_bCheckState = false;
    this->m_bCheckDeath = true;
    this->m_bInverseStateCheck = false;
    this->m_eExpectedState = EFightingActionState::None;
    this->m_eInterruptionBehaviour = EInterruptionBehavior::StopOrderAndRecover;
    this->m_bSwapAtCurrentTime = false;
    this->m_RecoveredFightingStates.AddDefaulted(1);
}


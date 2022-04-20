#include "ComboAIConditionIsTargetOrderState.h"

UComboAIConditionIsTargetOrderState::UComboAIConditionIsTargetOrderState() {
    this->m_eDesiredState = EAITargetOrderState::Played;
    this->m_eOrder = EOrderType::None;
    this->m_bUseOrderDuration = true;
    this->m_fStateValidDuration = 0.50f;
}


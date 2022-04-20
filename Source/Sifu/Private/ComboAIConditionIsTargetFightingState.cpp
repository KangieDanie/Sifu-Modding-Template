#include "ComboAIConditionIsTargetFightingState.h"

UComboAIConditionIsTargetFightingState::UComboAIConditionIsTargetFightingState() {
    this->m_eDesiredState = EComboAIConditionOnState::Started;
    this->m_eFightingState = EFightingState::None;
    this->m_bOnlyHighestFightingState = false;
    this->m_bUseStateDuration = true;
    this->m_fStateValidDuration = 0.50f;
}


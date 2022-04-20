#include "GenericInputData.h"

UGenericInputData::UGenericInputData() {
    this->m_bIsStackable = true;
    this->m_bIsToggleable = false;
    this->m_bResetToggleOnActivation = false;
    this->m_bResetToggleOnAnyStackedAction = false;
    this->m_UISeparator = TEXT("+");
    this->m_uiUIKeyIndex = -1;
    this->m_fLifeSpan = 0.50f;
    this->m_Action = InputAction::None;
    this->m_bOnlyFallbackToKeyWithBestPrio = false;
    this->m_bAlwaysCollideWithOtherInputs = false;
    this->m_bResetOnAnyActionStacked = false;
    this->m_UIData = NULL;
}


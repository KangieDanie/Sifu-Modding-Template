#include "ComboTransition.h"

FComboTransition::FComboTransition() {
    this->m_eInputTransition = EComboTransition::Light;
    this->m_ConditionInstance = NULL;
    this->m_fProbability = 0.00f;
}


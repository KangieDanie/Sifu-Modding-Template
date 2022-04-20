#include "ComboAIConditionGroup.h"

UComboAIConditionGroup::UComboAIConditionGroup() {
    this->m_eOperator = EComboAIConditionGroupOperator::AND;
    this->m_bForceTestAllConditions = false;
}


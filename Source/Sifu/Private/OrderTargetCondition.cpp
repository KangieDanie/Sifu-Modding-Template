#include "OrderTargetCondition.h"

UOrderTargetCondition::UOrderTargetCondition() {
    this->m_eOrderType = EOrderType::None;
    this->m_bTargetShouldTargetSelf = true;
    this->m_eRequiredTargetOrderType = EOrderType::None;
}


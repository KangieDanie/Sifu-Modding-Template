#include "OrderCondition.h"

UOrderCondition::UOrderCondition() {
    this->m_eOrderType = EOrderType::None;
    this->m_eAccessMode = EOrderAccessMode::RunningOrPending;
}


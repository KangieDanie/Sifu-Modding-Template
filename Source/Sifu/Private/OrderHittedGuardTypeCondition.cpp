#include "OrderHittedGuardTypeCondition.h"

UOrderHittedGuardTypeCondition::UOrderHittedGuardTypeCondition() {
    this->m_bCheckWasGuarded = false;
    this->m_bWasGuarded = true;
    this->m_bCheckGuardBreak = false;
    this->m_bWasGuardBroken = true;
    this->m_bCheckGuardType = false;
    this->m_eGuardType = EGuardType::None;
}


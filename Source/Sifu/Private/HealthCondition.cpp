#include "HealthCondition.h"

UHealthCondition::UHealthCondition() {
    this->m_eOperation = EOperationType::InferiorOrEqual;
    this->m_fValue = 0.00f;
}


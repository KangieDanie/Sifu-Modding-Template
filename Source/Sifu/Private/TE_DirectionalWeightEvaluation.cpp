#include "TE_DirectionalWeightEvaluation.h"

UTE_DirectionalWeightEvaluation::UTE_DirectionalWeightEvaluation() {
    this->m_eAction = InputAction::DesignateTarget;
    this->m_bBlockWhenActionIsInactive = true;
    this->m_eOperator = EWeightBinaryOperator::Add;
}


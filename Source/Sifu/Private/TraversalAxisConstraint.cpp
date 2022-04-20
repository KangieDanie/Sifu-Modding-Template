#include "TraversalAxisConstraint.h"

FTraversalAxisConstraint::FTraversalAxisConstraint() {
    this->m_eAxis = ESimpleAxis::X;
    this->m_eForbiddenAxisSide = ESimpleAxisSide::PositiveAxis;
}


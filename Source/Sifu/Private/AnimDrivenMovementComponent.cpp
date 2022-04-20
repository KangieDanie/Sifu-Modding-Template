#include "AnimDrivenMovementComponent.h"

UAnimDrivenMovementComponent::UAnimDrivenMovementComponent() {
    this->m_bUseDisplacement = true;
    this->m_fDisplacementCoeff = 1.00f;
    this->m_bUseRotation = true;
    this->m_fRotationCoeff = 1.00f;
}


#include "CameraDataModifierWithBehavior.h"

FCameraDataModifierWithBehavior::FCameraDataModifierWithBehavior() {
    this->m_Modifier = NULL;
    this->m_eBehavior = ECameraDataModifierTickBehavior::FullyBlended;
}


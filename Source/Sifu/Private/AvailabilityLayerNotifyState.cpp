#include "AvailabilityLayerNotifyState.h"

UAvailabilityLayerNotifyState::UAvailabilityLayerNotifyState() {
    this->m_availabilityLayerData = NULL;
    this->m_eOperation = EALBinaryOperation::SET;
    this->m_iPriority = 0;
}


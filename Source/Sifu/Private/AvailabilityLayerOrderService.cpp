#include "AvailabilityLayerOrderService.h"

UAvailabilityLayerOrderService::UAvailabilityLayerOrderService() {
    this->m_availabilityLayerData = NULL;
    this->m_eOperation = EALBinaryOperation::SET;
    this->m_iPriority = 0;
}


#include "AbstractCameraData.h"

void UAbstractCameraData::ClearTransitions() {
}

UAbstractCameraData::UAbstractCameraData() {
    this->m_DefaultCameraTransition = NULL;
    this->m_OutCameraTransition = NULL;
}


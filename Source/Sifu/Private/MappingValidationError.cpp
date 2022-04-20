#include "MappingValidationError.h"

FMappingValidationError::FMappingValidationError() {
    this->m_eResult = EMappingValidationErrorType::Collision;
    this->m_CollideWithData = NULL;
}


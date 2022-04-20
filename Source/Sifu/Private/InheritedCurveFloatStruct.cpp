#include "InheritedCurveFloatStruct.h"

FInheritedCurveFloatStruct::FInheritedCurveFloatStruct() {
    this->m_parentCurveFloat = NULL;
    this->m_finalCurveFloat = NULL;
    this->m_eInheritanceChoice = EInheritanceChoice::INHERIT;
}


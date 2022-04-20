#include "InheritedBoolStruct.h"

FInheritedBoolStruct::FInheritedBoolStruct() {
    this->m_bParentBool = false;
    this->m_bFinalBool = false;
    this->m_eInheritanceChoice = EInheritanceChoice::INHERIT;
}


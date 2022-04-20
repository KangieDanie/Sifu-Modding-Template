#include "AnalogInputSequenceStep.h"

FAnalogInputSequenceStep::FAnalogInputSequenceStep() {
    this->m_bAbsAngle = false;
    this->m_fMaxValidityDuration = 0.00f;
    this->m_bIsReferenceDirection = false;
    this->m_eReferenceDirBehavior = EAnalogInputReferenceDirection::UpdateWithInputDir;
    this->m_bIsResultDirection = false;
    this->m_bParallelizeOnValidation = false;
}


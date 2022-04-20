#include "FootIkAnimInstance.h"

UFootIkAnimInstance::UFootIkAnimInstance() {
    this->m_bExcludeActionStates = true;
    this->m_bExcludeHipsActionStates = true;
    this->m_eMinSignificanceRequired = ESCSignificanceBuckets::Lowest;
}


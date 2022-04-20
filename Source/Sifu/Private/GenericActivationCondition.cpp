#include "GenericActivationCondition.h"

UGenericActivationCondition::UGenericActivationCondition() {
    this->m_eUpdateFrequency = EOrderServiceConditionUpdateFrequency::OnDemand;
    this->m_eDeactivationMethd = EOrderServiceDeactivationMethod::None;
}


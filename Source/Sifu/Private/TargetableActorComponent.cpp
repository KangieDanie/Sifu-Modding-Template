#include "TargetableActorComponent.h"

void UTargetableActorComponent::BPF_SetShouldDisplay(bool _bSHould) {
}

UTargetableActorComponent::UTargetableActorComponent() {
    this->m_bShouldDisplayBP = false;
    this->m_bAlwaysShowHUD = false;
    this->m_eFaction = EFactionsEnums::Faction1;
    this->m_CustomMaxZDiff = NULL;
    this->m_bIsValidTarget = true;
    this->m_fMaxRange = 0.00f;
    this->m_bCanBeTargetedByLockMove = true;
}


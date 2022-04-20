#include "TE_NextHit.h"

class AFightingCharacter;

bool UTE_NextHit::BPF_TryGetTargetExtraInfos(const AFightingCharacter* _character, const FTargetResult& _targetInfos, FETS_NextHitExtraInfos& _infos) const {
    return false;
}

UTE_NextHit::UTE_NextHit() {
    this->m_fMinHitboxTimeLeft = 0.00f;
}


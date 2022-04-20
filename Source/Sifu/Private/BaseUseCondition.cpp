#include "BaseUseCondition.h"

bool UBaseUseCondition::IsFulfilled_Implementation() {
    return false;
}

void UBaseUseCondition::GetSurroundingPlayersNumInRange(float _fRange, int32& _iOutPlayersInside, int32& _iOutTotalPlayers) {
}

bool UBaseUseCondition::BPF_IsTargetPlayingOrder(EOrderType _eOrderType, uint8& _uiOutOrderID) const {
    return false;
}

bool UBaseUseCondition::BPF_IsStaminaRatioBelow(float _fStaminaThreshold) const {
    return false;
}

bool UBaseUseCondition::BPF_IsHitted(EGuardType& _eOutGuardType) {
    return false;
}

bool UBaseUseCondition::BPF_IsHealthRatioBelow(float _fHealthThreshold) const {
    return false;
}

bool UBaseUseCondition::BPF_IsDamageTakenRatioBelow(float _fDmgTakenThreshold, float _fTime) const {
    return false;
}

bool UBaseUseCondition::BPF_IsAttackIncoming(float& _fOutTimeTillStrike) const {
    return false;
}

bool UBaseUseCondition::BPF_HasAttackTicket() const {
    return false;
}

ESpeedState UBaseUseCondition::BPF_GetTargetSpeedState() const {
    return ESpeedState::V0;
}

EFightingState UBaseUseCondition::BPF_GetTargetFightingState() const {
    return EFightingState::OutOfFight;
}

int32 UBaseUseCondition::BPF_GetHitCount(float _fTime, EGuardType _eGuardTypeFilter) const {
    return 0;
}

float UBaseUseCondition::BPF_GetDistFromTarget() const {
    return 0.0f;
}

FName UBaseUseCondition::BPF_GetDifficultyName() const {
    return NAME_None;
}

float UBaseUseCondition::BPF_GetDifficultyLevelGauge() const {
    return 0.0f;
}

float UBaseUseCondition::BPF_GetDamageTaken(float _fTime) const {
    return 0.0f;
}


UBaseUseCondition::UBaseUseCondition() {
}


#include "HittedAnimHelper.h"
#include "Templates/SubclassOf.h"

class UOrderHittedGenericDB;

void UHittedAnimHelper::BPF_MakeGenericHitAnimWithOrderType(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, const FOrderType& _OrderType) {
}

void UHittedAnimHelper::BPF_MakeGenericHitAnim(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, TSubclassOf<UOrderHittedGenericDB> _order) {
}

float UHittedAnimHelper::BPF_GetHitAnimDuration(const FHittedAnimContainer& _animContainer, const FImpactResult& _Impact) {
    return 0.0f;
}

UHittedAnimHelper::UHittedAnimHelper() {
}


#include "UsableItem.h"

class AActor;

EItemUseState AUsableItem::BPF_GetItemUseState() const {
    return EItemUseState::BuildUp;
}

float AUsableItem::BPF_ComputeAttackKnockbackCoeff_Implementation(AActor* _Instigator, AActor* Target, const FHitResult& _hitResult) const {
    return 0.0f;
}







AUsableItem::AUsableItem() {
    this->m_ShapeComponent = NULL;
    this->m_iMatchesWithAvoid = 0;
}


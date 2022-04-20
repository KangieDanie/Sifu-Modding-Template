#include "AvoidMatchCondition.h"

EAvoidTrackingTypes UAvoidMatchCondition::BPE_GetAttackTrackingResponseFromAvoidType_Implementation(EAvoidType _eAvoidType) const {
    return EAvoidTrackingTypes::TrueTarget;
}

bool UAvoidMatchCondition::BPE_DoesAvoidMatch_Implementation(EAvoidType _eAvoidType, const FHitBox& _hitbox, bool _bMirror) const {
    return false;
}

bool UAvoidMatchCondition::BPE_DoesAvoidDismissesHit_Implementation(EAvoidType _eAvoidType, ESCCardinalPoints _eCardPoint, const FHitBox& _hitbox, bool _bMirror) const {
    return false;
}

UAvoidMatchCondition::UAvoidMatchCondition() {
}


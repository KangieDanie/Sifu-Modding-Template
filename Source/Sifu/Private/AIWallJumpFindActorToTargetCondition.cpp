#include "AIWallJumpFindActorToTargetCondition.h"
#include "Templates/SubclassOf.h"

class UAIActionWallJumpAttack;

TSubclassOf<UAIActionWallJumpAttack> UAIWallJumpFindActorToTargetCondition::BPF_GetAttackActionClass() const {
    return NULL;
}

UAIActionWallJumpAttack* UAIWallJumpFindActorToTargetCondition::BPF_GetAttackAction() const {
    return NULL;
}

UAIWallJumpFindActorToTargetCondition::UAIWallJumpFindActorToTargetCondition() {
    this->m_AttackAction = NULL;
}


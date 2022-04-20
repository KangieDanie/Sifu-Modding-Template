#include "AIActionWallJumpAttack.h"
#include "Templates/SubclassOf.h"

class UAIFightingComponent;
class UAIActionWallJumpAttack;
class AFightingCharacter;
class AActor;

bool UAIActionWallJumpAttack::BPF_PrepareWallJumpAttack(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionWallJumpAttack> _action, AActor* _wallJumpActor, const FVector& _vSnapLocation, const AActor* _target, bool _bIgnoreAngleConstraint) {
    return false;
}

bool UAIActionWallJumpAttack::BPF_PerformWallJumpAttackAction(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionWallJumpAttack> _action, AActor* _wallJumpActor, const FVector& _vSnapLocation, FGameplayTag _behaviorTag, const AActor* _target, FString& _outError, bool _bIgnoreAngleConstraint) {
    return false;
}

bool UAIActionWallJumpAttack::BPF_ComputeWallJumpStartLocation(FVector& _vOutLocation, const AFightingCharacter* _instigatorChara, const AActor* _target, const AActor* _wallJumpActor, const FVector& _vSnapLocation, TSubclassOf<UAIActionWallJumpAttack> _attackClass) {
    return false;
}

UAIActionWallJumpAttack::UAIActionWallJumpAttack() {
    this->m_fQueryResultLifetime = 0.30f;
    this->m_QueryTemplate = NULL;
    this->m_bDisplayDebugInfos = false;
    this->m_iDeprecationVersion = 0;
    this->m_fMaxJumpHeightWhenPossible = 100.00f;
}


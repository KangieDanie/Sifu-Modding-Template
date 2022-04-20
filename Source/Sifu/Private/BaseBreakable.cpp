#include "BaseBreakable.h"

class UPrimitiveComponent;
class AActor;

void ABaseBreakable::OnWakeStateChanged(bool _bIsAwake) {
}

void ABaseBreakable::OnPendingDamageReceived(const FVector& _vHitPoint, const FVector& _vHitDirection) {
}

void ABaseBreakable::OnOverlapEndProximityBoxCreatePhysics(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

void ABaseBreakable::OnOverlapBeginProximityBoxCreatePhysics(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ABaseBreakable::OnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ABaseBreakable::OnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

void ABaseBreakable::BPF_UnbindOverlap() {
}

void ABaseBreakable::BPF_SetDamageable(bool _bInDamageable) {
}

void ABaseBreakable::BPF_EngageDestructionCausedByActor(AActor* _inCauser, float _fInImpulseStrength) {
}

void ABaseBreakable::BPF_EngageDestruction(const FVector& _vInHurtOrigin, float _fRadius, float _fInImpulseStrength) {
}




ABaseBreakable::ABaseBreakable() {
    this->m_uiActionStateDestroyableByMask = 330715627672;
    this->m_uiAIActionStateDestroyableByMask = 330715627736;
    this->m_bFilterByActionStateOnOverlap = true;
    this->m_bFilterByActionStateOnHit = false;
    this->m_bFilterByResistanceIfMatchActionStateOnHit = true;
    this->m_bFilterByResistanceIfDontMatchActionStateOnHit = false;
    this->m_bDestroyableByThrowable = true;
    this->m_uiThrowableStateDestroyableByMask = 32992;
    this->m_fDestructionVelocityRef = 450.00f;
    this->m_bExecuteFractureOnce = true;
    this->m_bHasBeenFracturedOnce = false;
    this->m_fMinDamageRadius = 30.00f;
    this->m_fActionStateImpulseStrength = 300.00f;
    this->m_fPhysicImpulseStrength = 200.00f;
    this->m_fPhysicRightCursor = 700000.00f;
    this->m_fThrowableImpulseStrength = 300.00f;
    this->m_bPlayBounceSfx = true;
    this->m_BounceRTPC = TEXT("GPE_Physical_Switch");
    this->m_DestructionCauser = NULL;
    this->m_fProximityCreatePhysicsOffset = 0.00f;
}


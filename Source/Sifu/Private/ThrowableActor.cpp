#include "ThrowableActor.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFightingCharacter;
class UThrowableData;

void AThrowableActor::OnWakeUp(bool _bWakesUp) {
}

void AThrowableActor::CheckStabilisationForPhysicOptimization() {
}

bool AThrowableActor::BPF_UseFootToThrow(const AFightingCharacter* _Instigator) const {
    return false;
}

void AThrowableActor::BPF_ThrowFreely(AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset) {
}

void AThrowableActor::BPF_ThrowAtTarget(AActor* _target, AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset) {
}

void AThrowableActor::BPF_SetupThrow(AFightingCharacter* _Instigator, AActor* _target, FVector _vThrowDirection) {
}

void AThrowableActor::BPF_SetThrowableState(EThrowableState _eNewState) {
}

void AThrowableActor::BPF_OverrideThrowableData(TSubclassOf<UThrowableData> _newThrowableData) {
}

bool AThrowableActor::BPF_IsTooCloseToThrow(const AActor* _Instigator, const AActor* _target) const {
    return false;
}

EThrowableState AThrowableActor::BPF_GetThrowableState() const {
    return EThrowableState::AtRest;
}

UThrowableData* AThrowableActor::BPF_GetThrowableData() const {
    return NULL;
}

AActor* AThrowableActor::BPF_GetTarget(const AFightingCharacter* _character) const {
    return NULL;
}

EDebugTargetState AThrowableActor::BPF_GetDebugTargetState(const AFightingCharacter* _character, float& _fOutDist) const {
    return EDebugTargetState::Valid;
}



void AThrowableActor::BPE_GetHitBox_Implementation(FHitBox& _outHitbox, AActor* _actorHit) {
}

AThrowableActor::AThrowableActor() {
    this->m_bIsPickedupFromSpawning = false;
    this->m_ThrowAnimRequest = NULL;
    this->m_fDistToThrow = 200.00f;
    this->m_fTimeIgnoreFloor = 0.50f;
    this->m_fOnTargetHitSpeedReduction = 3.00f;
    this->m_fMissingSpeedReduc = 2.00f;
    this->m_fMissedDistance = 50.00f;
    this->m_bApplyGravityWhenFlyingFreely = true;
    this->m_eBounceType = EBounceType::SimpleBounce;
    this->m_eCurrentBounceType = EBounceType::SimpleBounce;
    this->m_BounceBackAngle = NULL;
    this->m_bSimulatePhysicOnSpawn = true;
    this->m_eTargettedHeight = EHeight::None;
    this->m_eAltTargettedHeight = EHeight::Low;
    this->m_fHeightLimitForFootAnimation = 20.00f;
    this->m_bUseAlternateHeightForFreeThrow = false;
    this->m_fOffsetDistTrace = 20.00f;
    this->m_fDistToCheckCollOnPathFreely = 400.00f;
    this->m_fSoundNoiseRadius = 1000.00f;
    this->m_bDestroyActorOnBreak = false;
    this->m_throwableData = NULL;
    this->m_eState = EThrowableState::None;
}


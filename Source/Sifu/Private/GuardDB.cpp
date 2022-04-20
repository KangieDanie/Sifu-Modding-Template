#include "GuardDB.h"

class UAnimSequence;
class AFightingCharacter;

void UGuardDB::BPF_GetPickupOnParryAnim(const FHitRequest& _request, AFightingCharacter* _character, FAnimContainer& _outAnim) const {
}

UAnimSequence* UGuardDB::BPF_GetHittedGuardAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const {
    return NULL;
}

UAnimSequence* UGuardDB::BPF_GetHittedGuardAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const {
    return NULL;
}

UAnimSequence* UGuardDB::BPF_GetHittedDeflectAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const {
    return NULL;
}

UAnimSequence* UGuardDB::BPF_GetHittedDeflectAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const {
    return NULL;
}

UGuardDB::UGuardDB() {
    this->m_aGuardAnimations[0] = NULL;
    this->m_aGuardAnimations[1] = NULL;
    this->m_aGuardAnimations[2] = NULL;
    this->m_aGuardAnimations[3] = NULL;
    this->m_bGuardMirrorFrontRightBackLeft = false;
    this->m_aGuardAnimationsWeapon[0] = NULL;
    this->m_aGuardAnimationsWeapon[1] = NULL;
    this->m_aGuardAnimationsWeapon[2] = NULL;
    this->m_aGuardAnimationsWeapon[3] = NULL;
    this->m_fGuardAngleRootToHips = 60.00f;
    this->m_fGuardAngleHipsToRoot = 150.00f;
    this->m_bGuardReorientBackToFront = true;
    this->m_bPrepEnabled = false;
    this->m_DynamicEnteringPrep = NULL;
    this->m_fEnteringPrepDuration = 0.20f;
    this->m_DynamicExitingPrep = NULL;
    this->m_fExitingPrepDuration = 0.40f;
    this->m_fPrepRange = 500.00f;
    this->m_bPrepForbidMove = true;
    this->m_fKnockbackCoeff = 0.85f;
    this->m_fParryStructureRecovery = 0.38f;
    this->m_fParryFreezeFrames = 2.00f;
    this->m_fParrySBFreezeFrames = 2.00f;
    this->m_ParryAttackerStructureDamage = 20.00f;
    this->m_ParryAttackerSuperDizzyDamage = 0.00f;
    this->m_bApplyDamagesOnGuardBroken = false;
    this->m_fDeflectedDuration = 0.00f;
    this->m_DeflectedAttackScaleCurves = NULL;
    this->m_eDeflectedLaunchMethodOnHit = EAvoidLaunchMethod::EndOfStrike;
    this->m_bTmpEnableDeflectedOrder = true;
    this->m_fParryAnimDuration = 12.00f;
    this->m_fGrabDuration = 1.00f;
    this->m_fForcedGuardDuration = 60.00f;
    this->m_ForcedGuardAvailabilityLayer = NULL;
    this->m_DefenseAnimRequest = NULL;
    this->m_ParryAnimRequest = NULL;
}


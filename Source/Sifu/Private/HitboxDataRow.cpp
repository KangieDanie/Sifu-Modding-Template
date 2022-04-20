#include "HitboxDataRow.h"

FHitboxDataRow::FHitboxDataRow() {
    this->m_iHitboxGroupID = 0;
    this->m_fMaxImpactAngle = 0.00f;
    this->m_bIgnoreImpactAngleWhenPenetrating = false;
    this->m_uiTargetFilters = 0;
    this->m_bOnlyHitCharacterWithRequiredHitboxGameplayTags = false;
    this->m_bHitTargetOnly = false;
    this->m_bIgnoreTarget = false;
    this->m_bHitAnyCharacterOnAvoid = false;
    this->m_bCanTouchMultipleTargetAtOnce = false;
    this->m_bCanBeLethal = false;
    this->m_bCanBreakStructure = false;
    this->m_KnockBackDynamicOnHit = NULL;
    this->m_KnockBackDynamicOnGuard = NULL;
    this->m_eHittedReaction = EHittedReaction::Hit;
    this->m_hitAction = NULL;
    this->m_bNotifyHittedOnHitAction = false;
    this->m_bApplyFreezeFramesOnHitAction = false;
    this->m_bPlayRumbleOnHitAction = false;
    this->m_bPlayRumbleOnNormalHit = false;
    this->m_eHitType = EHitType::Barehands;
    this->m_eAttackPower = EAttackPowers::Light;
    this->m_bOverrideResilience = false;
    this->m_iOverrideResilienceValue = 0;
    this->m_bDizzyOnAvoid = false;
    this->m_bDizzyOnParry = false;
    this->m_bParriable = false;
    this->m_bPlayAvoidedOrder = false;
    this->m_fMinKnockbackAngleFromHit = 0.00f;
    this->m_eKnockBackBehavior = EKnockbackBehavior::Regular;
    this->m_fKnockbackEastWestAngle = 0.00f;
    this->m_iHitboxDefenseMatrix = 0;
    this->m_iAvoidableDefenseMatrix = 0;
}


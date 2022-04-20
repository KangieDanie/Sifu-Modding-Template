#include "AvoidPropertyDB.h"

UAvoidPropertyDB::UAvoidPropertyDB() {
    this->m_fAvoidedDuration = 0.00f;
    this->m_AvoidedAttackScaleCurves = NULL;
    this->m_eAvoidFeedbackTypes = EAvoidFeedbackTypes::Normal;
    this->m_bAvoidedEnterDizzyOnAttacked = false;
    this->m_AvoidDBOnDizzyAttack = NULL;
    this->m_bShouldEndCombo = true;
}


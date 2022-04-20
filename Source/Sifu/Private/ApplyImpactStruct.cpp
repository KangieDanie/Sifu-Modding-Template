#include "ApplyImpactStruct.h"

FApplyImpactStruct::FApplyImpactStruct() {
    this->m_bUseForcedHittedAnim = false;
    this->m_bPlayOrderHitted = false;
    this->m_bEnterRagdoll = false;
    this->m_bDropWeaponOnDeath = false;
    this->m_bPlayOrderFightingState = false;
    this->m_uiPlayFightingStateOrderAfter = 0;
    this->m_specialResistanceDB = NULL;
    this->m_uiSpecificOrderIDToPlayBeforeFightingStateOrder = 0;
    this->m_bUseForcedFightingStateAnim = false;
    this->m_bInstantPlayStructureBrokenOrder = false;
    this->m_bUseForcedFightingStateRecoveryAnim = false;
    this->m_bUseForceMirrorFightingState = false;
    this->m_bForceMirrorFightingState = false;
    this->m_bNotifyInstigator = false;
}


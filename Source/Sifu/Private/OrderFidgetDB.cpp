#include "OrderFidgetDB.h"

UOrderFidgetDB::UOrderFidgetDB() {
    this->m_BlendProfileBySpeedStateTable = NULL;
    this->m_fSyncFidgetMirrorWithQuadrantCooldown = 0.20f;
    this->m_TakeOutWeaponFidgetDB = NULL;
    this->m_fHideWeaponPostBlendRatio = 1.00f;
    this->m_bPlayAlertFidgetIfMoveStatusMatch = true;
    this->m_bPlayAlertFidgetIfMoveStatusDoesntMatch = true;
    this->m_fFidgetDefaultBlendInDuration = 0.40f;
    this->m_fFidgetMaxBlendInDurationByAnimPercent = 0.30f;
    this->m_fFidgetDefaultBlendOutDuration = 0.50f;
    this->m_fFidgetQuickBlendOutDuration = 0.20f;
}


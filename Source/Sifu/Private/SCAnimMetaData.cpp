#include "SCAnimMetaData.h"


USCAnimMetaData::USCAnimMetaData() {
    this->m_bUseWeaponAnimInfos = false;
    this->m_SlopeCurveName = TEXT("SlopeCurve");
    this->m_bShowSyncedAnimDebug = false;
    this->m_bRotateTargetBoneLocationOnFloorOrientation = true;
    this->m_bLockSpineXAxisRotation = false;
    this->m_bLockSpineYAxisRotation = true;
    this->m_fFloorSpineRepartitionBlendInOut = 0.10f;
    this->m_bOverrideSlopeBoneRepartition = false;
}


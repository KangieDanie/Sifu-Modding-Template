#include "WGLevelSequenceDirectorData.h"

UWGLevelSequenceDirectorData::UWGLevelSequenceDirectorData() {
    this->m_InputContext = InputContext::Invalid;
    this->m_eForcedPlayerCameraSide = EPlayerCameraForcedSide::None;
    this->m_bHideOwnerCarriedWeaponOnPlay = true;
    this->m_bShowOwnerCarriedWeaponOnFinished = true;
    this->m_bForceOutOfIdle = false;
}


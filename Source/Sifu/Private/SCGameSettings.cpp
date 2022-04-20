#include "SCGameSettings.h"

USCGameSettings::USCGameSettings() {
    this->m_bFilterByOrderServiceOnTeleport = true;
    this->m_FilteringOrderServicesOnTeleport.AddDefaulted(1);
    this->m_DefaultPoseAssetNotifyStateEaseIn = 0.10f;
    this->m_DefaultPoseAssetNotifyStateEaseOut = 0.10f;
    this->m_fPredictionTime = 0.00f;
    this->m_iHitBoxSamplingInFPS = 60;
    this->m_uiPredictionStep = 1;
    this->m_bAllowPredictionOnMovement = true;
    this->m_bDetachAvoidCapsuleWhenNoAvoidWindow = true;
}


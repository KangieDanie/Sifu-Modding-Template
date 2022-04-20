#include "PoseAssetNotifyState.h"

UPoseAssetNotifyState::UPoseAssetNotifyState() {
    this->m_bOverridePoseAsset = false;
    this->m_bUseCustomEaseIn = false;
    this->m_fEaseInDuration = 0.10f;
    this->m_bUseCustomEaseOut = false;
    this->m_fEaseOutDuration = 0.10f;
    this->m_iSerializeVersion = 0;
}


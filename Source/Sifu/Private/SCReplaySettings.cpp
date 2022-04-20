#include "SCReplaySettings.h"

bool USCReplaySettings::BPF_IsReplayEditorEnabled() {
    return false;
}

bool USCReplaySettings::BPF_IsPhotomodeEnabled() {
    return false;
}

FReplayKeyDataCameraSettings USCReplaySettings::BPF_GetDefaultCameraSettings() {
    return FReplayKeyDataCameraSettings{};
}

USCReplaySettings::USCReplaySettings() {
    this->m_ScreenShotFileName = TEXT("Photomode");
    this->m_ScreenShotDateFormat = TEXT("%Y-%m-%d---%H-%M-%S");
    this->m_bReplayEditorBuildEnabled = false;
    this->m_bPhotomodeBuildEnabled = true;
}


#include "ReplayCineCameraComponent.h"

FReplayKeyDataCameraSettings UReplayCineCameraComponent::BPF_GetCameraSettings() const {
    return FReplayKeyDataCameraSettings{};
}

void UReplayCineCameraComponent::BPF_ApplyCameraSettings(FReplayKeyDataCameraSettings _settings) {
}

UReplayCineCameraComponent::UReplayCineCameraComponent() {
    this->m_fZoomSpeed = 1.00f;
    this->m_ZoomSpeedCurve = NULL;
}


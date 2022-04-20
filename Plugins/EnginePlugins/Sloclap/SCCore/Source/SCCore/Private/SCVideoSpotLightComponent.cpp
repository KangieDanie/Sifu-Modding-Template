#include "SCVideoSpotLightComponent.h"

void USCVideoSpotLightComponent::OnMediaOpen(const FString& _openedUrl) {
}

USCVideoSpotLightComponent::USCVideoSpotLightComponent() {
    this->m_MediaTex = NULL;
    this->m_fLengthInSecond = 1.00f;
    this->m_ColourCurve = NULL;
}


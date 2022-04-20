#include "SCVideoRectLightComponent.h"

void USCVideoRectLightComponent::OnMediaOpen(const FString& _openedUrl) {
}

USCVideoRectLightComponent::USCVideoRectLightComponent() {
    this->m_MediaTex = NULL;
    this->m_fLengthInSecond = 1.00f;
    this->m_ColourCurve = NULL;
}


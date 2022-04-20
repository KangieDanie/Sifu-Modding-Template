#include "SCVideoPointLightComponent.h"

void USCVideoPointLightComponent::OnMediaOpen(const FString& _openedUrl) {
}

USCVideoPointLightComponent::USCVideoPointLightComponent() {
    this->m_MediaTex = NULL;
    this->m_fLengthInSecond = 1.00f;
    this->m_ColourCurve = NULL;
}


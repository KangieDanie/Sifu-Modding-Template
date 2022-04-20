#include "SCPositionBakeSceneCapture.h"

ASCPositionBakeSceneCapture::ASCPositionBakeSceneCapture() {
    this->m_iDebugSwitch = 0;
    this->m_iBakedPositionTextureSize = 1024;
    this->m_BakedLocalPositionDrawer = NULL;
    this->m_BakedPreSkinnedPositionDrawer = NULL;
    this->m_fMinusZDistance = 10000.00f;
    this->m_MinusZDistanceParameterName = TEXT("Minus Z Distance");
    this->m_TextureSizeParameterName = TEXT("Size");
    this->m_BoundsMinParameterName = TEXT("BoundsMin");
    this->m_BoundsMaxParameterName = TEXT("BoundsMax");
    this->m_ChannelUVParameterName = TEXT("ChannelUV");
    this->m_BakedPositionTextureTarget = NULL;
    this->m_BakedLocalPositionDrawerInstanceDynamic = NULL;
    this->m_BakedPreSkinnedPositionDrawerInstanceDynamic = NULL;
}


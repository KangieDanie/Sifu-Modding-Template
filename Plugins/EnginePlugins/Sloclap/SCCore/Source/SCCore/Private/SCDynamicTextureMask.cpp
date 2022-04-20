#include "SCDynamicTextureMask.h"

class UTexture;

void USCDynamicTextureMask::SetupLocalBoundsOffline() {
}

void USCDynamicTextureMask::CreatePositionBakingTextureTarget() {
}

void USCDynamicTextureMask::CreateMaskTextureTarget() {
}

void USCDynamicTextureMask::CreateBothTexturesTarget() {
}

bool USCDynamicTextureMask::BPF_DrawOnMaskOverride(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, UTexture* _TextureToProject, FLinearColor _color, EDynamicTextureMask_DrawShape _eDrawShape) {
    return false;
}

bool USCDynamicTextureMask::BPF_DrawOnMask(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, UTexture* _TextureToProject, FLinearColor _color) {
    return false;
}

bool USCDynamicTextureMask::BPF_BakeSelfPositionRuntime() {
    return false;
}

USCDynamicTextureMask::USCDynamicTextureMask() {
    this->m_bEnablePositionBaking = false;
    this->m_ePositionBakingTypeEnum = EDynamicTextureMask_PositionBakingType::PBT_SimpleStaticMesh;
    this->m_eDrawType = EDynamicTextureMask_DrawType::DT_Additive;
    this->m_eDrawShape = EDynamicTextureMask_DrawShape::DS_Sphere;
    this->m_PositionBakerActor = NULL;
    this->m_DynamicTextureMaskDB = NULL;
    this->m_eTextureType = RTF_RGBA8_SRGB;
    this->m_iBakedTextureResolution = 512;
    this->m_iMaskTextureResolution = 512;
    this->m_BakedPositionTextureTarget = NULL;
    this->m_StaticBakedPositionTexture = NULL;
    this->m_MaskRenderTarget = NULL;
    this->m_bIsBaked = false;
    this->m_bIsPlane = false;
    this->m_MeshToBake = NULL;
    this->m_iUVChannel = 0;
    this->m_iDilationSteps = 2;
    this->m_BakedPositionTextureParameterName = TEXT("BakedPosition");
    this->m_HitPositionParameterName = TEXT("HitPosition");
    this->m_HitSizeParameterName = TEXT("HitSize");
    this->m_HitFadeParameterName = TEXT("HitFade");
    this->m_AxisVParameterName = TEXT("AxisV");
    this->m_AxisUParameterName = TEXT("AxisU");
    this->m_HitMeshBoundsMinParameterName = TEXT("BoundsMin");
    this->m_HitMeshBoundsMaxParameterName = TEXT("BoundsMax");
    this->m_ChannelUVParameterName = TEXT("ChannelUV");
    this->m_MaskParameterName = TEXT("HitMask");
    this->m_MarkColorParameterName = TEXT("MarkColor");
    this->m_TextureToProjectParameterName = TEXT("TextureToProject");
    this->m_TextureToCopyParameterName = TEXT("TextureToCopy");
    this->m_TextureToDilateParameterName = TEXT("TextureToDilate");
    this->m_DilationStepsParameterName = TEXT("Steps");
    this->m_DilationTextureSizeParameterName = TEXT("TextureSize");
    this->m_IsPlaneParameterName = TEXT("IsPlane");
    this->m_DilateMID = NULL;
    this->m_CopyMID = NULL;
    this->m_BakedPositionHitDrawerInstanceDynamic = NULL;
}


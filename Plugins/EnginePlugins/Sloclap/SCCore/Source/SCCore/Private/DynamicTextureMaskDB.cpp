#include "DynamicTextureMaskDB.h"

UDynamicTextureMaskDB::UDynamicTextureMaskDB() {
    this->m_PositionBakingActor = NULL;
    this->m_BakedPositionHitDrawer_SimpleStaticMesh = NULL;
    this->m_BakedPositionHitDrawer_ComplexSkeletalMesh = NULL;
    this->m_BakedPositionHitDrawer_SimpleSkeletalMesh = NULL;
    this->m_Drawer_TexProj_OpaqueAlpha_Standard = NULL;
    this->m_Drawer_TexProj_OpaqueAlpha_Atlas = NULL;
    this->m_Drawer_TexProj_OpaqueColor_Standard = NULL;
    this->m_Drawer_TexProj_OpaqueColor_Atlas = NULL;
    this->m_Drawer_TexProj_Additive_Standard = NULL;
    this->m_Drawer_TexProj_Additive_Atlas = NULL;
    this->m_Drawer_SphereMask_Additive = NULL;
    this->m_Drawer_SphereMask_OpaqueAlpha = NULL;
    this->m_Drawer_SphereMask_OpaqueColor = NULL;
    this->m_Drawer_CapsuleMask_Additive = NULL;
    this->m_Drawer_CapsuleMask_OpaqueAlpha = NULL;
    this->m_Drawer_CapsuleMask_OpaqueColor = NULL;
    this->m_TextureDilation = NULL;
    this->M_TextureCopy = NULL;
    this->m_ProxyDilationTexture = NULL;
}


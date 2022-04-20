#include "WallEnvironmentalAttackSettings.h"

UWallEnvironmentalAttackSettings::UWallEnvironmentalAttackSettings() {
    this->m_eRayCastCollisionChannel = ECC_WorldStatic;
    this->m_fMaxRefCharSnapDistance = 500.00f;
    this->m_fSplineMargin = 15.00f;
    this->m_fMaxRaycastAngleWithSnap = 20.00f;
    this->m_fMaxRaycastAngleWithoutSnap = 10.00f;
    this->m_fMaxDistToProjection = 100.00f;
    this->m_ImpactBoneName = TEXT("custom_joint_06");
    this->m_fImpactBoneYawRotation = -90.00f;
    this->m_bUseInstigatorAsRef = false;
    this->m_bMirrorAnimOnRightSide = true;
    this->m_animRequest = NULL;
}


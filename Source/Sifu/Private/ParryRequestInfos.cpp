#include "ParryRequestInfos.h"

FParryRequestInfos::FParryRequestInfos() {
    this->m_eQuadrant = EQuadrantTypes::FrontLeft;
    this->m_eCardinal = ESCCardinalPoints::North;
    this->m_bFromDown = false;
    this->m_bHasAWeapon = false;
    this->m_bIsWeaponOnOppositeHand = false;
}


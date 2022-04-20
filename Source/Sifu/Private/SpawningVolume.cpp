#include "SpawningVolume.h"

ASpawningVolume::ASpawningVolume() {
    this->m_ShapeComponent = NULL;
    this->m_bAllowSpawnIfCharacterOverlaps = true;
    this->m_bSpawnIfNothingUnder = true;
    this->m_fSecurityMargin = 30.00f;
}


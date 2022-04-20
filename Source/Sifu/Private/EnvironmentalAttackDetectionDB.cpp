#include "EnvironmentalAttackDetectionDB.h"

UEnvironmentalAttackDetectionDB::UEnvironmentalAttackDetectionDB() {
    this->m_DefaultAnimRequest = NULL;
    this->m_WallAnimRequest = NULL;
    this->m_fDetectionRadius = 2000.00f;
    this->m_eCollisionChannel = ECC_WorldStatic;
}


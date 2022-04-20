#include "AIIdleDB.h"

UAIIdleDB::UAIIdleDB() {
    this->m_eSouthRotationWay = ESCRotationWay::None;
    this->m_bCanPlayFidget = false;
    this->m_eLookAtApplyMode = ELookAtApplyMode::Procedural_Spine;
}


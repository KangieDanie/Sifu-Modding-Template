#include "SCCollisionSettings.h"

USCCollisionSettings::USCCollisionSettings() {
    this->m_EnvCollisionRetrieveSphereRadius = 20.00f;
    this->m_EnvCollisionRetrieveSweepDist = 20.00f;
    this->m_eAIColChannel = ECC_Pawn;
    this->m_eCapsuleLocalPawnChannel = ECC_GameTraceChannel2;
    this->m_eHitTraceChannel = ECC_GameTraceChannel3;
    this->m_eLDCollChannel = ECC_GameTraceChannel4;
}


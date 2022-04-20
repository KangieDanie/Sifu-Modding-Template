#include "WCollisionSettings.h"

UWCollisionSettings::UWCollisionSettings() {
    this->m_fFindMovePreventingCompsEpsilon = -10.00f;
    this->m_eThrowableCheckCollisionChannel = ECC_PhysicsBody;
    this->m_bForceCCDOnThrowables = true;
    this->m_eTraversalCheckCollisionChannel = ECC_Pawn;
    this->m_eEnvironmentalInteractionZoneChannel = ECC_GameTraceChannel16;
    this->m_eTraversalCollisionChannel = ECC_GameTraceChannel13;
    this->m_eWallJumpChannel = ECC_GameTraceChannel15;
    this->m_eSpectatorCollisionChannel = ECC_GameTraceChannel14;
}


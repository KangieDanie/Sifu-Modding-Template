#include "DeathRadialImpulse.h"

FDeathRadialImpulse::FDeathRadialImpulse() {
    this->Radius = 0.00f;
    this->Falloff = RIF_Constant;
    this->ImpulseStrength = 0.00f;
    this->bImpulseVelChange = false;
    this->DestructibleDamage = 0.00f;
}


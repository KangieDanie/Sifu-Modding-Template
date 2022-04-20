#include "DodgeConfigStruct.h"

FDodgeConfigStruct::FDodgeConfigStruct() {
    this->m_fMinDuration = 0.00f;
    this->m_fMaxDurationArray[0] = 0.00f;
    this->m_fMaxDurationArray[1] = 0.00f;
    this->m_fMaxDurationArray[2] = 0.00f;
    this->m_fMaxDurationArray[3] = 0.00f;
    this->m_fMovementLengthArray[0] = 0.00f;
    this->m_fMovementLengthArray[1] = 0.00f;
    this->m_fMovementLengthArray[2] = 0.00f;
    this->m_fMovementLengthArray[3] = 0.00f;
    this->m_bOverrideAnimDynamicByCurve = false;
    this->m_OverrideDodgeDynamicCurve = NULL;
    this->m_iFrameBuildUp = 0;
    this->m_iNbFrameDodgeWindowMiddle = 0;
    this->m_iFrameInterruptibleRelease = 0;
    this->m_iFrameRelease = 0;
    this->m_bHasImpactOnGuardGauge = false;
    this->m_fGuardGaugeCost = 0.00f;
    this->m_bForceDirOnNeutralDodge = false;
    this->m_eForcedCardinalDirOnNeutralDodge = ESCCardinalPoints::North;
}


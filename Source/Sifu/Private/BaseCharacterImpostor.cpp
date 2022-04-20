#include "BaseCharacterImpostor.h"

ABaseCharacterImpostor::ABaseCharacterImpostor() {
    this->m_eMoanMinBucket = ESCSignificanceBuckets::High;
//    this->m_MoanEvent = NULL;
    //this->m_MoanIntensityRTPC = NULL;
    this->m_fMoanInterpolationInMs = 0.00f;
    this->m_AngleFromCameraForwardRemappingCurve = NULL;
    this->m_MoanRefBoneName = TEXT("head");
}


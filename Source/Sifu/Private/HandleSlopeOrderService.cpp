#include "HandleSlopeOrderService.h"

UHandleSlopeOrderService::UHandleSlopeOrderService() {
    this->m_SelfBoneName = TEXT("custom_joint_05");
    this->m_fProjectionMinAxisSize = 10.00f;
    this->m_fMinSlopeAngle = -30.00f;
    this->m_fMaxSlopeAngle = 30.00f;
    this->m_iNumProjectionIteration = 4;
    this->m_fInterpSpeed = 10.00f;
}


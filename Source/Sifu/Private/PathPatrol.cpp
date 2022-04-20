#include "PathPatrol.h"

APathPatrol::APathPatrol() {
    this->m_patrolControlPoints.AddDefaulted(1);
    this->m_ePatrolType = EPatrolType::Loop;
    this->m_lookAtTarget = NULL;
}


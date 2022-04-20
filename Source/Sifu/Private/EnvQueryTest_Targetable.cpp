#include "EnvQueryTest_Targetable.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Targetable::UEnvQueryTest_Targetable() {
    this->m_TargetTo = UEnvQueryContext_Querier::StaticClass();
    this->m_fTargetRange = 300.00f;
}


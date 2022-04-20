#include "EnvQueryTest_TargettingQueryer.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_TargettingQueryer::UEnvQueryTest_TargettingQueryer() {
    this->m_TargetTo = UEnvQueryContext_Querier::StaticClass();
}


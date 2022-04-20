#include "SCEnvQueryTest_Trace.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"

USCEnvQueryTest_Trace::USCEnvQueryTest_Trace() {
    this->m_bCustomCollisionResponse = false;
    this->m_FromContext = UEnvQueryContext_Querier::StaticClass();
    this->m_ToContext = UEnvQueryContext_Item::StaticClass();
    this->m_bIgnoreQuerier = true;
}


#include "EnvQueryGenerator_ActorClassFromManager.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_ActorClassFromManager::UEnvQueryGenerator_ActorClassFromManager() {
    this->m_SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->m_ActorClass = NULL;
}


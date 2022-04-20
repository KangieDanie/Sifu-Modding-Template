#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryGenerator
#include "EnvironmentQuery/EnvQueryGenerator.h"
//CROSS-MODULE INCLUDE: AIModule AIDataProviderFloatValue
#include "DataProviders/AIDataProvider.h"
//CROSS-MODULE INCLUDE: AIModule AIDataProviderBoolValue
#include "EnvQueryGenerator_ActorClassFromManager.generated.h"

class UEnvQueryContext;
class AActor;

UCLASS(EditInlineNew)
class SIFU_API UEnvQueryGenerator_ActorClassFromManager : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue m_GenerateOnlyActorsInRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> m_SearchCenter;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> m_ActorClass;
    
    UEnvQueryGenerator_ActorClassFromManager();
};


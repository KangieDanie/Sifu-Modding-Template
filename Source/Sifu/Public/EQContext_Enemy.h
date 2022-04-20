#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryContext
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EQContext_Enemy.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEQContext_Enemy : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEQContext_Enemy();
};


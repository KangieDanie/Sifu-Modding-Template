#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "SCEnvQueryManager.generated.h"

UCLASS(NonTransient)
class SCCORE_API USCEnvQueryManager : public UEnvQueryManager {
    GENERATED_BODY()
public:
    USCEnvQueryManager();
};


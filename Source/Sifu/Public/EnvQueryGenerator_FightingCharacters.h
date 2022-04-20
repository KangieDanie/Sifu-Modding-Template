#pragma once
#include "CoreMinimal.h"
#include "EnvQueryGenerator_ActorClassFromManager.h"
#include "EnvQueryGenerator_FightingCharacters.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UEnvQueryGenerator_FightingCharacters : public UEnvQueryGenerator_ActorClassFromManager {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_FightingCharacters();
};


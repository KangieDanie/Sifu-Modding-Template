#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryItemType_ActorBase
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "EnvQueryItemType_WallJump.generated.h"

UCLASS()
class UEnvQueryItemType_WallJump : public UEnvQueryItemType_ActorBase {
    GENERATED_BODY()
public:
    UEnvQueryItemType_WallJump();
};


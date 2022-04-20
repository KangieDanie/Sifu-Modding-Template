#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule EnvQueryContext
#include "EnvironmentQuery/EnvQueryContext.h"
#include "AIWallJumAttack_EQContext_ItemWJStartLocation.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UAIWallJumAttack_EQContext_ItemWJStartLocation : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UAIWallJumAttack_EQContext_ItemWJStartLocation();
};


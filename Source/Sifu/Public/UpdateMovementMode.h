#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "UpdateMovementMode.generated.h"

UCLASS()
class SIFU_API UUpdateMovementMode : public UBTService {
    GENERATED_BODY()
public:
    UUpdateMovementMode();
};


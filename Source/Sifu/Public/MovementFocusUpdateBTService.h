#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "MovementFocusUpdateBTService.generated.h"

UCLASS()
class SIFU_API UMovementFocusUpdateBTService : public UBTService {
    GENERATED_BODY()
public:
    UMovementFocusUpdateBTService();
};


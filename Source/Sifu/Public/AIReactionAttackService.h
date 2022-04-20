#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "AIReactionAttackService.generated.h"

UCLASS()
class SIFU_API UAIReactionAttackService : public UBTService {
    GENERATED_BODY()
public:
    UAIReactionAttackService();
};


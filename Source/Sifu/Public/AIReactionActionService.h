#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "AIReactionActionService.generated.h"

UCLASS()
class SIFU_API UAIReactionActionService : public UBTService {
    GENERATED_BODY()
public:
    UAIReactionActionService();
};


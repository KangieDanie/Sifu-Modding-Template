#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "InvestigationPositionUpdaterService.generated.h"

UCLASS()
class SIFU_API UInvestigationPositionUpdaterService : public UBTService {
    GENERATED_BODY()
public:
    UInvestigationPositionUpdaterService();
};


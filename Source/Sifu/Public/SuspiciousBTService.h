#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "SuspiciousBTService.generated.h"

UCLASS()
class SIFU_API USuspiciousBTService : public UBTService {
    GENERATED_BODY()
public:
    USuspiciousBTService();
};


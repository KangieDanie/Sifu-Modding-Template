#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EOrderType.h"
#include "IsOrderRunningService.generated.h"

UCLASS()
class SIFU_API UIsOrderRunningService : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrder;
    
    UIsOrderRunningService();
};


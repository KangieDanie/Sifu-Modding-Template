#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
#include "OutsideCirclesLifeBTTaskNode.generated.h"

UCLASS()
class SIFU_API UOutsideCirclesLifeBTTaskNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UOutsideCirclesLifeBTTaskNode();
};


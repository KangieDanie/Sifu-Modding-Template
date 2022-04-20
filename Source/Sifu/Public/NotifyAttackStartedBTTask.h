#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBTTaskNode
#include "SCBTTaskNode.h"
#include "NotifyAttackStartedBTTask.generated.h"

UCLASS()
class SIFU_API UNotifyAttackStartedBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
    UNotifyAttackStartedBTTask();
};


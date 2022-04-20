#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBTTaskNode
#include "SCBTTaskNode.h"
#include "PlayOrderTask.generated.h"

UCLASS(Abstract)
class SIFU_API UPlayOrderTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
    UPlayOrderTask();
};


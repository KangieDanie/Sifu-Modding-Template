#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h"
#include "SCAIActionRunBehaviorDynamic.generated.h"

UCLASS()
class SCCORE_API USCAIActionRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic {
    GENERATED_BODY()
public:
    USCAIActionRunBehaviorDynamic();
};


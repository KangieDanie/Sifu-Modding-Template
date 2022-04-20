#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BaseActorTargetCondition.generated.h"

UCLASS(Abstract)
class SIFU_API UBaseActorTargetCondition : public UObject {
    GENERATED_BODY()
public:
    UBaseActorTargetCondition();
};


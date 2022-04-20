#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "BehaviorTargetCondition.generated.h"

UCLASS()
class SIFU_API UBehaviorTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_uiBehaviorMask;
    
    UBehaviorTargetCondition();
};


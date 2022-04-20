#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "ActorLastTimeOnScreenCondition.generated.h"

UCLASS()
class SIFU_API UActorLastTimeOnScreenCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_ValidTimeRangeCondition;
    
    UActorLastTimeOnScreenCondition();
};


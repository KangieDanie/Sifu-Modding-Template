#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BlackboardSubActorCondition.generated.h"

UCLASS()
class SIFU_API UBlackboardSubActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_BlackboardKey;
    
    UBlackboardSubActorCondition();
};


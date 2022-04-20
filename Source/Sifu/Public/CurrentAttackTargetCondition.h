#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "CurrentAttackTargetCondition.generated.h"

UCLASS()
class SIFU_API UCurrentAttackTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxElapsedTimeSinceLastUpdate;
    
    UCurrentAttackTargetCondition();
};


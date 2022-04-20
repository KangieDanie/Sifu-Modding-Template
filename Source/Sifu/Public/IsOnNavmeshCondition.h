#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "IsOnNavmeshCondition.generated.h"

UCLASS()
class SIFU_API UIsOnNavmeshCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fDistTolerance;
    
    UIsOnNavmeshCondition();
};


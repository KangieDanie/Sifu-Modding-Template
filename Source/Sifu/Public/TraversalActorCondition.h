#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ETraversalPhase.h"
#include "TraversalActorCondition.generated.h"

UCLASS()
class SIFU_API UTraversalActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETraversalPhase m_ePhase;
    
    UTraversalActorCondition();
};


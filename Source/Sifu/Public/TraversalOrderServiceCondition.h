#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "ETraversalPhase.h"
#include "TraversalOrderServiceCondition.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTraversalOrderServiceCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETraversalPhase m_ePhase;
    
    UTraversalOrderServiceCondition();
};


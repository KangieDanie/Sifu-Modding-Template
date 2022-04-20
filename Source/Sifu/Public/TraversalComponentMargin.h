#pragma once
#include "CoreMinimal.h"
#include "TraversalComponentMargin.generated.h"

USTRUCT(BlueprintType)
struct FTraversalComponentMargin {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fNegAxisMargin;
    
    UPROPERTY(EditAnywhere)
    float m_fPosAxisMargin;
    
    SIFU_API FTraversalComponentMargin();
};


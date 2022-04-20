#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "ParryAnimationParryQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FParryAnimationParryQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Array[4];
    
    SIFU_API FParryAnimationParryQuadrantArray();
};


#pragma once
#include "CoreMinimal.h"
#include "ParryAnimationParryQuadrantArray.h"
#include "ParryAnimationCharacterQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FParryAnimationCharacterQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParryAnimationParryQuadrantArray m_Array[4];
    
    SIFU_API FParryAnimationCharacterQuadrantArray();
};


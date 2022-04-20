#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "HittedAnimCardinalOnlyArray.generated.h"

USTRUCT()
struct FHittedAnimCardinalOnlyArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Array[4];
    
    SIFU_API FHittedAnimCardinalOnlyArray();
};


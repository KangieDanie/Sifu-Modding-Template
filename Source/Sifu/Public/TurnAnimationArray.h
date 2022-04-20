#pragma once
#include "CoreMinimal.h"
#include "TurnAnimation.h"
#include "TurnAnimationArray.generated.h"

USTRUCT(BlueprintType)
struct FTurnAnimationArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTurnAnimation> m_TurnAnimations;
    
    SIFU_API FTurnAnimationArray();
};


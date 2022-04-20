#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "DeathStandupAnimationFromAnimation.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDeathStandupAnimationFromAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_DeathAnim;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_StandAnim;
    
    SIFU_API FDeathStandupAnimationFromAnimation();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore ESCRotationWay
#include "ESCRotationWay.h"
#include "TurnAnimation.generated.h"

USTRUCT(BlueprintType)
struct FTurnAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_animContainer;
    
    UPROPERTY(EditAnywhere)
    ESCRotationWay m_eRotationWay;
    
    SIFU_API FTurnAnimation();
};


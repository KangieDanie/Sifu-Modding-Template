#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "IdleAnimAndTransition.generated.h"

USTRUCT(BlueprintType)
struct FIdleAnimAndTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_IdleAnimation;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_IdleExitTransition[4];
    
    SIFU_API FIdleAnimAndTransition();
};


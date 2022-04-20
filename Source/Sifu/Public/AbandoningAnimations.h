#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "AbandoningAnimations.generated.h"

USTRUCT()
struct FAbandoningAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_GoingDown;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Loop;
    
    SIFU_API FAbandoningAnimations();
};


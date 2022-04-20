#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "SpeedStateAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FSpeedStateAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Anims[4];
    
    SIFU_API FSpeedStateAnimContainer();
};


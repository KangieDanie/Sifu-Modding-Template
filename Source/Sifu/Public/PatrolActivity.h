#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "PatrolActivity.generated.h"

USTRUCT(BlueprintType)
struct FPatrolActivity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_animContainer;
    
    UPROPERTY(EditAnywhere)
    float m_fActivityDuration;
    
    SIFU_API FPatrolActivity();
};


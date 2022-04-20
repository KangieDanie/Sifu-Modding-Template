#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataWorldTarget.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ReplayKeyDataCameraTarget.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataCameraTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataWorldTarget m_Target;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vInitialTargetLocation;
    
    SIFU_API FReplayKeyDataCameraTarget();
};


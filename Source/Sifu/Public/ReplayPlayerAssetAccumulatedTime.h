#pragma once
#include "CoreMinimal.h"
#include "ReplayPlayerAssetAccumulatedTime.generated.h"

USTRUCT(BlueprintType)
struct FReplayPlayerAssetAccumulatedTime {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_fAccumulatedTime;
    
    UPROPERTY()
    int32 m_iCachedContainerIndex;
    
    SIFU_API FReplayPlayerAssetAccumulatedTime();
};


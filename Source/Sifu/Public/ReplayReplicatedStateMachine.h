#pragma once
#include "CoreMinimal.h"
#include "ReplayPlayerAssetAccumulatedTime.h"
#include "ReplayReplicatedStateMachine.generated.h"

USTRUCT(BlueprintType)
struct FReplayReplicatedStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_iStateIndex;
    
    UPROPERTY()
    int32 m_iAnimInstanceIndex;
    
    UPROPERTY()
    int32 m_iStateMachineIndex;
    
    UPROPERTY()
    TArray<FReplayPlayerAssetAccumulatedTime> m_ReplicatedPlayerAssets;
    
    SIFU_API FReplayReplicatedStateMachine();
};


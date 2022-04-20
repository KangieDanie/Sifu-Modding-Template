#pragma once
#include "CoreMinimal.h"
#include "ReplayPlayerAssetAccumulatedTime.h"
#include "ReplayReplicatedAnimInstanceAssetPlayers.generated.h"

USTRUCT(BlueprintType)
struct FReplayReplicatedAnimInstanceAssetPlayers {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_iAnimInstanceIndex;
    
    UPROPERTY()
    TArray<FReplayPlayerAssetAccumulatedTime> m_AssetPlayers;
    
    SIFU_API FReplayReplicatedAnimInstanceAssetPlayers();
};


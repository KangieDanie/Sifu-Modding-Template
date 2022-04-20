#pragma once
#include "CoreMinimal.h"
#include "ReplayCachedAnimInstanceAssetPlayers.generated.h"

USTRUCT()
struct FReplayCachedAnimInstanceAssetPlayers {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_iAnimInstanceIndex;
    
    SIFU_API FReplayCachedAnimInstanceAssetPlayers();
};


#pragma once
#include "CoreMinimal.h"
#include "ReplayAnimGraphPlayerAssetVersioning.h"
#include "ReplayAnimGraphVersioning.generated.h"

USTRUCT(BlueprintType)
struct FReplayAnimGraphVersioning {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> m_StateMachineNames;
    
    UPROPERTY()
    TArray<FReplayAnimGraphPlayerAssetVersioning> m_AssetPlayers;
    
    SIFU_API FReplayAnimGraphVersioning();
};


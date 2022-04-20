#pragma once
#include "CoreMinimal.h"
#include "ReplayAnimGraphPlayerAssetVersioning.generated.h"

USTRUCT(BlueprintType)
struct FReplayAnimGraphPlayerAssetVersioning {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_iAnimInstanceIndex;
    
    UPROPERTY()
    int32 m_iStateMachineIndex;
    
    UPROPERTY()
    int32 m_iStateMachineStateIndex;
    
    UPROPERTY()
    int32 m_iPlayerAssetIndex;
    
    UPROPERTY()
    FString m_UniqueID;
    
    SIFU_API FReplayAnimGraphPlayerAssetVersioning();
};


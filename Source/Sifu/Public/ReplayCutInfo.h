#pragma once
#include "CoreMinimal.h"
#include "ReplayCutInfo.generated.h"

class UReplayKey;

USTRUCT(BlueprintType)
struct FReplayCutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayKey* m_FirstKey;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayKey* m_SecondKey;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayKey* m_CurrentKey;
    
    SIFU_API FReplayCutInfo();
};


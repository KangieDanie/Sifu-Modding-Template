#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataWorldTarget.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataWorldTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString m_ID;
    
    SIFU_API FReplayKeyDataWorldTarget();
};


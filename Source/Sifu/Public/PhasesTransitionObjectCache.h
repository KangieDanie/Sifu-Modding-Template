#pragma once
#include "CoreMinimal.h"
#include "PhasesTransitionObjectCacheEntry.h"
#include "PhasesTransitionObjectCache.generated.h"

USTRUCT(BlueprintType)
struct FPhasesTransitionObjectCache {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FPhasesTransitionObjectCacheEntry> m_Cache;
    
    SIFU_API FPhasesTransitionObjectCache();
};


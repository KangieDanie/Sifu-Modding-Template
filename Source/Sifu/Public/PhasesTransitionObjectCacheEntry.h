#pragma once
#include "CoreMinimal.h"
#include "PhasesTransitionObjectCacheEntry.generated.h"

class UAIPhaseTransition;

USTRUCT(BlueprintType)
struct FPhasesTransitionObjectCacheEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAIPhaseTransition* m_Object;
    
    SIFU_API FPhasesTransitionObjectCacheEntry();
};


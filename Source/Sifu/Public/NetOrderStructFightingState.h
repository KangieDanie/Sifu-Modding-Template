#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "HitRequest.h"
#include "NetOrderStructFightingState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetOrderStructFightingState : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRequest m_Hit;
    
    SIFU_API FNetOrderStructFightingState();
};


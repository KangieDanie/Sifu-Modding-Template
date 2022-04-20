#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "EFightingState.h"
#include "NetOrderStructFightingStateRecovery.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFightingStateRecovery : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EFightingState m_eFightingState;
    
    SIFU_API FNetOrderStructFightingStateRecovery();
};


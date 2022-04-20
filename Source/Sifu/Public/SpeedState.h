#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.h"
#include "SpeedState.generated.h"

USTRUCT(BlueprintType)
struct FSpeedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bV0;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bV1;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bV2;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bV3;
    
    UPROPERTY(Transient)
    ESpeedState m_eSpeedState;
    
    SIFU_API FSpeedState();
};


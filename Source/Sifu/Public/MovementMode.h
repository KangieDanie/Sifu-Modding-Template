#pragma once
#include "CoreMinimal.h"
#include "MovementMode.generated.h"

USTRUCT(BlueprintType)
struct FMovementMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bNone;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bWalking;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bNavWalking;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bFalling;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bSwimming;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bFlying;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bCustom;
    
    UPROPERTY(Transient)
    uint8 m_replicatedMvtMode;
    
    SIFU_API FMovementMode();
};


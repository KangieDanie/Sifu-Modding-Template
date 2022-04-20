#pragma once
#include "CoreMinimal.h"
#include "EMoveStatus.h"
#include "MoveStatus.generated.h"

USTRUCT(BlueprintType)
struct FMoveStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bExploration;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bCombat;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated, Transient)
    bool m_bNone;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EMoveStatus m_eMoveStatus;
    
    SIFU_API FMoveStatus();
};


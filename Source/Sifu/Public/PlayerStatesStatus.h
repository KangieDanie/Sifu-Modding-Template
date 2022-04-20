#pragma once
#include "CoreMinimal.h"
#include "PlayerStatesStatus.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatesStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bWasActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fActiveSince;
    
    SIFU_API FPlayerStatesStatus();
};


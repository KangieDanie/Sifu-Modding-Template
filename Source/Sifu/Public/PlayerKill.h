#pragma once
#include "CoreMinimal.h"
#include "PlayerKill.generated.h"

class AFightingPlayerState;

USTRUCT()
struct SIFU_API FPlayerKill {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AFightingPlayerState* m_PlayerState;
    
    UPROPERTY(Transient)
    uint32 m_uiNbKills;
    
    FPlayerKill();
};


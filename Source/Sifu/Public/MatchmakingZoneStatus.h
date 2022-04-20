#pragma once
#include "CoreMinimal.h"
#include "MatchmakingZoneStatus.generated.h"

USTRUCT()
struct FMatchmakingZoneStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 m_uiZoneID;
    
    UPROPERTY()
    uint8 m_uiSubZoneID;
    
    UPROPERTY()
    uint8 m_uiOpenedGates;
    
    UPROPERTY()
    uint8 m_uiOpenedGhostGates;
    
    SIFU_API FMatchmakingZoneStatus();
};


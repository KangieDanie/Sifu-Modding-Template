#pragma once
#include "CoreMinimal.h"
#include "SoundStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FSoundStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    uint32 m_uiStateValue;
    
    UPROPERTY(SaveGame)
    bool m_bReplicates;
    
    SIFU_API FSoundStateInfo();
};


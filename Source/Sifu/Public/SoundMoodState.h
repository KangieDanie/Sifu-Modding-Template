#pragma once
#include "CoreMinimal.h"
#include "ESoundMoodGameplayState.h"
#include "SoundMoodMeleeState.h"
#include "SoundMoodState.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSoundMoodState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESoundMoodGameplayState m_eGameplayState;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iLevel;
    
    UPROPERTY(BlueprintReadOnly)
    FSoundMoodMeleeState m_meleeState;
    
    FSoundMoodState();
};


#pragma once
#include "CoreMinimal.h"
#include "SoundMoodMeleeState.generated.h"

class AAISituationActor;

USTRUCT(BlueprintType)
struct SIFU_API FSoundMoodMeleeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 m_iMeleeDifficultyLevel;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsFightActive;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AAISituationActor> m_AiSituation;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AAISituationActor> m_LastEncounteredSituation;
    
    FSoundMoodMeleeState();
};


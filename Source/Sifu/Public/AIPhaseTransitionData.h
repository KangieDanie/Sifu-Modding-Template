#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransitionData.generated.h"

class ALevelSequenceActor;

USTRUCT(BlueprintType)
struct FAIPhaseTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 m_iNewPhase;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iPreviousPhase;
    
    UPROPERTY(BlueprintReadOnly)
    FName m_ArchetypeName;
    
    UPROPERTY(BlueprintReadOnly)
    ALevelSequenceActor* m_SequenceActor;
    
    SIFU_API FAIPhaseTransitionData();
};


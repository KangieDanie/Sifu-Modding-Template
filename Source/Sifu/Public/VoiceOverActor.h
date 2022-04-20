#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: LevelSequence LevelSequenceActor
#include "LevelSequenceActor.h"
#include "VoiceOver.h"
#include "VoiceOverActor.generated.h"

UCLASS()
class SIFU_API AVoiceOverActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVoiceOver m_CurrentVoiceOver;
    
    UPROPERTY(EditAnywhere)
    float m_fDelayBetweenVoiceOvers;
    
protected:
    UFUNCTION()
    void OnLoadingCompleted();
    
    UFUNCTION()
    void OnDelayAfterSequenceExpired();
    
    UFUNCTION()
    void OnCurrentSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_PlayVoiceOver(const FVoiceOver& _voiceOver);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSequenceFinished();
    
    /*AVoiceOverActor();*/
};


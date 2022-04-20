#pragma once
#include "CoreMinimal.h"
#include "WGLevelSequence.h"
#include "EAIPhaseTransitionEvents.h"
#include "AIPhaseTransitionSequence.generated.h"

UCLASS()
class SIFU_API UAIPhaseTransitionSequence : public UWGLevelSequence {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnLevelTransition(int32 _iTransitionIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyEvent(EAIPhaseTransitionEvents _event);
    
public:
    UAIPhaseTransitionSequence();
};


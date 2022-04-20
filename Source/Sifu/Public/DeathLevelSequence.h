#pragma once
#include "CoreMinimal.h"
#include "WGLevelSequence.h"
#include "EDeathSequenceEvents.h"
#include "DeathLevelSequence.generated.h"

UCLASS()
class SIFU_API UDeathLevelSequence : public UWGLevelSequence {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyEvent(EDeathSequenceEvents _event);
    
public:
    UDeathLevelSequence();
};


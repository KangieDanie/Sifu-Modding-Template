#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: LevelSequence LevelSequenceActor
#include "LevelSequenceActor.h"
#include "SCLevelSequenceActor.generated.h"

UCLASS()
class SIFU_API ASCLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_Play();
    
   /* ASCLevelSequenceActor();*/
};


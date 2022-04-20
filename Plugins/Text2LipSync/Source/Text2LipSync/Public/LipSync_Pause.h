#pragma once
#include "CoreMinimal.h"
#include "LipSync_Interval.h"
#include "LipSync_Pause.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_Pause {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FLipSync_Interval> Pauses;
    
    TEXT2LIPSYNC_API FLipSync_Pause();
};


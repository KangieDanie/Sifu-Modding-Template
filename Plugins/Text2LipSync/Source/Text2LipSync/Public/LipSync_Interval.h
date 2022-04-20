#pragma once
#include "CoreMinimal.h"
#include "LipSync_Interval.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_Interval {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PhonemeIndex;
    
    UPROPERTY()
    float StartTime;
    
    UPROPERTY()
    float EndTime;
    
    UPROPERTY()
    uint8 Flag;
    
    TEXT2LIPSYNC_API FLipSync_Interval();
};


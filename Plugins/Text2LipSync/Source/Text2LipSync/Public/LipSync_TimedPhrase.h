#pragma once
#include "CoreMinimal.h"
#include "LipSync_TimedPhrase.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_TimedPhrase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemName;
    
    UPROPERTY()
    uint8 Flag;
    
    TEXT2LIPSYNC_API FLipSync_TimedPhrase();
};


#pragma once
#include "CoreMinimal.h"
#include "LipSync_TimedData.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_TimedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Data;
    
    TEXT2LIPSYNC_API FLipSync_TimedData();
};


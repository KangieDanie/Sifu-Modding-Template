#pragma once
#include "CoreMinimal.h"
#include "LipSyncEmotionData.h"
#include "LipSyncEmotionDataArray.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncEmotionDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FLipSyncEmotionData> emotionArray;
    
    SCDIALOGMANAGERPLUGIN_API FLipSyncEmotionDataArray();
};


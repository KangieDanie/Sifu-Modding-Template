#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LipSync_TimedPhrase.h"
#include "LipSync_TimedData.h"
#include "LipSync_Phrase.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FLipSync_Phrase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* VoiceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLipSync_TimedData Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLipSync_TimedPhrase> Notifies;
    
    TEXT2LIPSYNC_API FLipSync_Phrase();
};


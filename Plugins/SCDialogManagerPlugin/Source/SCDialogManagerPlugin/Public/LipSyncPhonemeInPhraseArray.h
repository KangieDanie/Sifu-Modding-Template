#pragma once
#include "CoreMinimal.h"
#include "LipSyncPhonemeInPhrase.h"
#include "LipSyncPhonemeInPhraseArray.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncPhonemeInPhraseArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FLipSyncPhonemeInPhrase> phonemeArray;
    
    SCDIALOGMANAGERPLUGIN_API FLipSyncPhonemeInPhraseArray();
};


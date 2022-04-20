#pragma once
#include "CoreMinimal.h"
#include "VoiceOver.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FVoiceOver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> m_AudioSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FText> m_Lines;
    
    SIFU_API FVoiceOver();
};


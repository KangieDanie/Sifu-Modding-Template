#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceDBEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimSequenceDBEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_AnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_DisplayText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> m_Positions;
    
    SIFU_API FAnimSequenceDBEntry();
};


#pragma once
#include "CoreMinimal.h"
#include "AnimByHeight.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimByHeight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Array[3];
    
    SIFU_API FAnimByHeight();
};


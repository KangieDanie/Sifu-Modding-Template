#pragma once
#include "CoreMinimal.h"
#include "TimerAndOffset.generated.h"

USTRUCT(BlueprintType)
struct FTimerAndOffset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fTime;
    
    UPROPERTY(EditAnywhere)
    float m_fOffset;
    
    SIFU_API FTimerAndOffset();
};


#pragma once
#include "CoreMinimal.h"
#include "PlayOrderInfos.generated.h"

USTRUCT(BlueprintType)
struct FPlayOrderInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    uint8 m_uiAfterOrder;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fDelay;
    
    SIFU_API FPlayOrderInfos();
};


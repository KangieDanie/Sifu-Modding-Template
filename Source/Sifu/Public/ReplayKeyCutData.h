#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCutType.h"
#include "ReplayKeyCutData.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyCutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyCutType m_eCutType;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bFadingEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fFadingTime;
    
    SIFU_API FReplayKeyCutData();
};


#pragma once
#include "CoreMinimal.h"
#include "AnimQuadrantStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimQuadrantStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsInFrontLeft;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsInFrontRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsInBackRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsInBackLeft;
    
    FAnimQuadrantStruct();
};


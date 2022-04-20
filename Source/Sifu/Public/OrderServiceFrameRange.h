#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "OrderServiceFrameRange.generated.h"

class UOrderServiceFrameRangeRequest;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceFrameRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bBoundToAnim;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOrderServiceFrameRangeRequest* m_FrameRangeRequest;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_FrameRange;
    
    FOrderServiceFrameRange();
};


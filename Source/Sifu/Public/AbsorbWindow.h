#pragma once
#include "CoreMinimal.h"
#include "FrameRange.h"
#include "AbsorbWindow.generated.h"

class UAbsorbPropertyDB;

USTRUCT(BlueprintType)
struct FAbsorbWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iAbsorbID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAbsorbPropertyDB* m_AbsorbPropertyDB;
    
    SIFU_API FAbsorbWindow();
};


#pragma once
#include "CoreMinimal.h"
#include "FrameRange.h"
#include "EAvoidType.h"
#include "AvoidWindow.generated.h"

class UAvoidPropertyDB;

USTRUCT(BlueprintType)
struct FAvoidWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFrameRange m_FrameRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iAvoidID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAvoidType m_eAvoidType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvoidPropertyDB* m_AvoidPropertyDB;
    
    SIFU_API FAvoidWindow();
};


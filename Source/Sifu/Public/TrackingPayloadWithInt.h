#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadWithInt.generated.h"

USTRUCT()
struct FTrackingPayloadWithInt {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 m_Int;
    
    SIFU_API FTrackingPayloadWithInt();
};


#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadWithText.generated.h"

USTRUCT()
struct FTrackingPayloadWithText {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString m_Text;
    
    SIFU_API FTrackingPayloadWithText();
};


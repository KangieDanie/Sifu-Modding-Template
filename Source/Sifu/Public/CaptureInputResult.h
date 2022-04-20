#pragma once
#include "CoreMinimal.h"
#include "InputMappingKeySlot.h"
#include "CaptureInputResult.generated.h"

USTRUCT()
struct FCaptureInputResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FInputMappingKeySlot> m_Slots;
    
    SIFU_API FCaptureInputResult();
};


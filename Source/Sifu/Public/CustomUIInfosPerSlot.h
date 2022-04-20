#pragma once
#include "CoreMinimal.h"
#include "EControllerIconAxisTypes.h"
#include "CustomUIInfosPerSlot.generated.h"

USTRUCT()
struct SIFU_API FCustomUIInfosPerSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iSlotIndex;
    
    UPROPERTY(EditAnywhere)
    EControllerIconAxisTypes m_AxisTypes;
    
    FCustomUIInfosPerSlot();
};


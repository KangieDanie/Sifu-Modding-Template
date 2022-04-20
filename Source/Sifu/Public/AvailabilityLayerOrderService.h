#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "EALBinaryOperation.h"
#include "AvailabilityLayerOrderService.generated.h"

class UAvailabilityLayerData;

UCLASS(EditInlineNew)
class SIFU_API UAvailabilityLayerOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eOperation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iPriority;
    
    UAvailabilityLayerOrderService();
};


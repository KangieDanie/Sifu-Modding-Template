#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "ESpeedState.h"
#include "ForceSpeedStateOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UForceSpeedStateOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpeedState m_eForcedSpeedState;
    
    UForceSpeedStateOrderService();
};


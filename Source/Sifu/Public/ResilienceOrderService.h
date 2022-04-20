#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "ResilienceOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UResilienceOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iBonus;
    
    UResilienceOrderService();
};


#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "LookAtLimits.h"
#include "ActivateLookAtOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UActivateLookAtOrderService : public UOrderService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLookAtLimits m_lookAtLimit;
    
public:
    UActivateLookAtOrderService();
};


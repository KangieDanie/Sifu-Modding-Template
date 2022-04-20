#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DisableExpulseOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDisableExpulseOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UDisableExpulseOrderService();
};


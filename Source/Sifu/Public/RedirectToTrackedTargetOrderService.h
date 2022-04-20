#pragma once
#include "CoreMinimal.h"
#include "RedirectToTargetOrderService.h"
#include "RedirectToTrackedTargetOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API URedirectToTrackedTargetOrderService : public URedirectToTargetOrderService {
    GENERATED_BODY()
public:
    URedirectToTrackedTargetOrderService();
};


#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DisableCamFadeOnOwnerOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDisableCamFadeOnOwnerOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_CameraFadeMaterialParam;
    
    UDisableCamFadeOnOwnerOrderService();
};


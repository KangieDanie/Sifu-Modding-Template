#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "PelvisDirectionComputationParams.h"
#include "PelvisDirectionComputationParamsOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UPelvisDirectionComputationParamsOrderService : public UOrderService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bUseLastFrameLocation;
    
    UPROPERTY(EditAnywhere)
    FPelvisDirectionComputationParams m_Params;
    
public:
    UPelvisDirectionComputationParamsOrderService();
};


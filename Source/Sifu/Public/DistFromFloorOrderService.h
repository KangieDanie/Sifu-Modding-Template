#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DistFromFloorOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDistFromFloorOrderService : public UOrderService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fMinFloorDist;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxFloorDist;
    
public:
    UDistFromFloorOrderService();
};


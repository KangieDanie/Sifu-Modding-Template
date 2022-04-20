#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "HitBox.h"
#include "GenerateImpactOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGenerateImpactOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHitBox m_HitGenerated;
    
    UGenerateImpactOrderService();
};


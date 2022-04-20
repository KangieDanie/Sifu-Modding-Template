#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "EStaminaImpactType.h"
#include "StaminaOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UStaminaOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EStaminaImpactType m_eImpactOnStart;
    
    UPROPERTY(EditAnywhere)
    float m_fImpactCostOnStart;
    
    UPROPERTY(EditAnywhere)
    EStaminaImpactType m_eImpactOnStop;
    
    UPROPERTY(EditAnywhere)
    float m_fImpactCostOnStop;
    
    UStaminaOrderService();
};


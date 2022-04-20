#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "EFightingState.h"
#include "ForceFightingStateOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UForceFightingStateOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFightingState m_eFightingState;
    
    UForceFightingStateOrderService();
};


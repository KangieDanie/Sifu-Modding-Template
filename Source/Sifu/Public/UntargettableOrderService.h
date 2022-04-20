#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DisabledTargetInfos.h"
#include "UntargettableOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UUntargettableOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bInverse;
    
    UPROPERTY(EditAnywhere)
    TArray<FDisabledTargetInfos> m_DisabledTargets;
    
    UUntargettableOrderService();
};


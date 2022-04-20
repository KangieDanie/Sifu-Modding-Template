#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceActivationConditions.h"
#include "OrderServiceIsPlayingActivationCondition.generated.h"

class UOrderService;

UCLASS(EditInlineNew)
class SIFU_API UOrderServiceIsPlayingActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_InstanceClass;
    
    UPROPERTY(EditAnywhere)
    bool m_bStopWhenOrderServiceRunning;
    
    UOrderServiceIsPlayingActivationCondition();
};


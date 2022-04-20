#pragma once
#include "CoreMinimal.h"
#include "AIBTTaskNode.h"
#include "EOrderType.h"
#include "AIAbandoningBTTask.generated.h"

UCLASS()
class SIFU_API UAIAbandoningBTTask : public UAIBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_NoReactionDuringOrders;
    
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_PlayReactionAfterOrders;
    
public:
    UAIAbandoningBTTask();
};


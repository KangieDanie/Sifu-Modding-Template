#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HittedOrderServiceInfos.generated.h"

class UOrderService;

USTRUCT(BlueprintType)
struct SIFU_API FHittedOrderServiceInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fStartDelayFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseCustomEnabledDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fEnabledFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UOrderService> m_OrderService;
    
    FHittedOrderServiceInfos();
};


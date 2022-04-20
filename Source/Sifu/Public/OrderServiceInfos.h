#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceClassInstance.h"
#include "EOrderServiceFreezeFrameHandling.h"
#include "OrderServiceFrameRange.h"
#include "OrderServiceInfos.generated.h"

class UOrderServiceActivationConditions;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bDisabled;
    
    UPROPERTY(EditAnywhere)
    EOrderServiceFreezeFrameHandling m_eFreezeFrameHandling;
    
    UPROPERTY(EditAnywhere)
    bool m_bActivateFromFrameRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bActivateWhenMissingFromAnim;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderServiceActivationConditions> m_activationCondition;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertCondition;
    
    UPROPERTY(EditAnywhere)
    FOrderServiceFrameRange m_FrameRangeInfos;
    
    UPROPERTY(EditAnywhere)
    FOrderServiceClassInstance m_OrderServiceInstance;
    
    FOrderServiceInfos();
};


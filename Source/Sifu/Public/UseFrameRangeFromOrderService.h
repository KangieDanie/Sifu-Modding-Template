#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceFrameRangeRequest.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "UseFrameRangeFromOrderService.generated.h"

class UOrderService;

UCLASS(EditInlineNew)
class SIFU_API UUseFrameRangeFromOrderService : public UOrderServiceFrameRangeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bOnTarget;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_DefaultRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepDefaultLowerRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepDefaultUpperRange;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_OrderSerice;
    
    UUseFrameRangeFromOrderService();
};


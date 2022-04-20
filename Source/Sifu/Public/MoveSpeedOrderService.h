#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "MoveSpeedOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UMoveSpeedOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_CurveName;
    
    UPROPERTY(EditAnywhere)
    float m_fSpeedStateBlendDuration;
    
    UMoveSpeedOrderService();
};


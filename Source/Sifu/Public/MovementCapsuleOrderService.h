#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "MovementCapsuleOrderService.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class SIFU_API UMovementCapsuleOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fTargetHalfHeight;
    
    UPROPERTY(EditAnywhere)
    float m_fTargetRadius;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Blend;
    
    UMovementCapsuleOrderService();
};


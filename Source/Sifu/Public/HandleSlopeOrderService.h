#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "HandleSlopeOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UHandleSlopeOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_SelfBoneName;
    
    UPROPERTY(EditAnywhere)
    float m_fProjectionMinAxisSize;
    
    UPROPERTY(EditAnywhere)
    float m_fMinSlopeAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSlopeAngle;
    
    UPROPERTY(EditAnywhere)
    int32 m_iNumProjectionIteration;
    
    UPROPERTY(EditAnywhere)
    float m_fInterpSpeed;
    
    UHandleSlopeOrderService();
};


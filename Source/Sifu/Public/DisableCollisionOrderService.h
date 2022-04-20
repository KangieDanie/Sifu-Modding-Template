#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "DisableCollisionOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDisableCollisionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bWithTargetOnly;
    
    UPROPERTY(EditAnywhere)
    bool m_bCollisionWithStaticMeshOn;
    
    UPROPERTY(EditAnywhere)
    bool m_bBlockTargettedAttacks;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableCollisionsOnLastThreat;
    
    UDisableCollisionOrderService();
};


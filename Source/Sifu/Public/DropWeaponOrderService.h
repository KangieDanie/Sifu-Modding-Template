#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "OrderService.h"
#include "EDropReason.h"
#include "DropWeaponOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDropWeaponOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_vDropImpulse;
    
    UPROPERTY(EditAnywhere)
    EDropReason m_eDropReason;
    
    UDropWeaponOrderService();
};


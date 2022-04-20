#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "OrderService.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "ActorTransformOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UActorTransformOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_vTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator m_Rotation;
    
    UActorTransformOrderService();
};


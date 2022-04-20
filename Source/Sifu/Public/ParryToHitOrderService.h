#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "HitBox.h"
#include "HitDescription.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "HittedAnimContainer.h"
#include "ParryToHitOrderService.generated.h"

class AFightingCharacter;

UCLASS(EditInlineNew)
class SIFU_API UParryToHitOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHitBox m_HitToApply;
    
    UPROPERTY(EditAnywhere)
    float m_fFreezeFrames;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetParryAnimations(const FHitDescription& _hitDescription, AFightingCharacter* _parriyer, FAnimContainer& _outParryierAnim, FHittedAnimContainer& _outParriedAnim) const;
    
    UParryToHitOrderService();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "OrderService.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "BPOrderServiceInstance.h"
#include "HitOrderService.generated.h"

class AActor;

UCLASS(EditInlineNew)
class SIFU_API UHitOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHitBox m_Hit;
    
    UPROPERTY(EditAnywhere)
    bool m_bFreezeInstigator;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreOwner;
    
    UPROPERTY(EditAnywhere)
    bool m_bOrderTargetIsInstigator;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bPersistIgnoredActorsFromPreviousOrderService;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseBoneLocationFromAnim;
    
    UPROPERTY(EditAnywhere)
    bool m_bUpdateHitboxVelocity;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    AActor* BPE_GetInstigator(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetIgnoredActors(const FBPOrderServiceInstance& _orderServiceInstance, TArray<AActor*>& _actors) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBoxWithLocation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation, FVector& _location) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation) const;
    
    UHitOrderService();
};


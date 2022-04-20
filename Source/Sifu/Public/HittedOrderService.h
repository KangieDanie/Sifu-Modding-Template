#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "BPOrderServiceInstance.h"
//CROSS-MODULE INCLUDE: Engine BoneReferenceContainerInterface
#include "HittedServiceInfos.h"
#include "HitBox.h"
#include "EOrderType.h"
#include "HittedAnimContainer.h"
#include "HitRequest.h"
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "Engine/EngineTypes.h"

#include "AnimContainer.h"
#include "HittedOrderService.generated.h"

class UAttackPropertiesResistanceDB;

UCLASS(EditInlineNew)
class SIFU_API UHittedOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHittedServiceInfos m_Infos;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_Hit;
    
    UPROPERTY(EditAnywhere)
    bool m_bFreezeInstigator;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eInstigatorOrderType;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UAttackPropertiesResistanceDB* BPE_GetSpecialResistanceDB(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FHittedAnimContainer BPE_GetLethalHittedAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitRequest(const FBPOrderServiceInstance& _orderServiceInstance, FHitRequest& _hitRequest, FHitResult& _hitResult) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FAnimContainer BPE_GetFightingStateRecoveryAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FAnimContainer BPE_GetFightingStateLoopAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UHittedOrderService();
    
    // Fix for true pure virtual functions not being implemented
};


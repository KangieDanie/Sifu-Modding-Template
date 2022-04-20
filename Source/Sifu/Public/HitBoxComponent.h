#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
//CROSS-MODULE INCLUDE: Engine HitResult
#include "HitRequest.h"
#include "ImpactResult.h"
#include "HitBox.h"
#include "HitBoxComponent.generated.h"

class AFightingCharacter;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHitBoxComponent_OnHit, const FHitResult&, _hitResult, const FHitRequest&, _hitRequest, const FImpactResult&, _Impact);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHitBoxComponent_OnAnyHit);

UCLASS(BlueprintType)
class SIFU_API UHitBoxComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHitBoxComponent_OnHit m_OnHit;
    
    UPROPERTY(BlueprintAssignable)
    FHitBoxComponent_OnAnyHit m_OnAnyHit;
    
    UPROPERTY(EditAnywhere)
    float m_fMinVelocity;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecoveryAfterDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryAfterDelay;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecoveryOnLeaveZone;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitBox;
    
private:
    UPROPERTY()
    TMap<TWeakObjectPtr<AActor>, float> m_Recoveries;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetOwningCharacter(AFightingCharacter* _owningCharacter);
    
    UHitBoxComponent();
};


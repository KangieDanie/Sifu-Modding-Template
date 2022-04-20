#pragma once
#include "CoreMinimal.h"
#include "EFactionsEnums.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "ETargetingPrio.h"
#include "EActionType.h"
#include "TargetableConditions.h"
#include "TargetableActorComponent.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class SIFU_API UTargetableActorComponent : public USceneComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bShouldDisplayBP;
    
    UPROPERTY(EditAnywhere)
    bool m_bAlwaysShowHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFactionsEnums m_eFaction;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CustomMaxZDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsValidTarget;
    
    UPROPERTY(VisibleAnywhere)
    float m_fMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EActionType, FTargetableConditions> m_ActionTypeConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ETargetingPrio, bool> m_mAllowedTargetingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EActionType, bool> m_mAllowedActionType;
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_bCanBeTargetedByLockMove;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetShouldDisplay(bool _bSHould);
    
    UTargetableActorComponent();
    
    // Fix for true pure virtual functions not being implemented
};


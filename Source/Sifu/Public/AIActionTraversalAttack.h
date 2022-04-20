#pragma once
#include "CoreMinimal.h"
#include "AIActionAttack.h"
#include "AIActionTraversalAttack.generated.h"

UCLASS()
class SIFU_API UAIActionTraversalAttack : public UAIActionAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fMiniumDistBetweenInstigatorAndTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fTargetRadiusPrecision;
    
    UPROPERTY(EditAnywhere)
    float m_fAttackCancelMinDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fEntryPointReEvaluatePrecision;
    
    UPROPERTY(EditAnywhere)
    float m_fOffsetOnTraversalSide;
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnReachedEntryPoint();
    
public:
    UAIActionTraversalAttack();
};


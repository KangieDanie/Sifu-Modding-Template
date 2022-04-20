#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionAttack.generated.h"

class UOrderAttackParams;

UCLASS(Abstract)
class SIFU_API UAIActionAttack : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bCheckObstacles;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckFriendlyFire;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_NotifyAttackStarted() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPreCreateOrderAttackParams(FName _paramsName, UOrderAttackParams* _orderParams);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCreatedOrderAttackParams(FName _paramsName, UOrderAttackParams* _orderParams);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetAttackRange() const;
    
    UAIActionAttack();
};


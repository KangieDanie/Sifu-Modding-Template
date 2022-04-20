#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "AttackProgressNotification.generated.h"

class UAttackProgressNotification;

UCLASS()
class UAttackProgressNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bDiscovered;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bUnlocked;
    
    UPROPERTY(BlueprintReadOnly)
    FName m_Attack;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iBaseXP;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iGainedXP;
    
    UFUNCTION(BlueprintCallable)
    UAttackProgressNotification* BPF_InitUnlocked(FName _attack);
    
    UFUNCTION(BlueprintCallable)
    UAttackProgressNotification* BPF_InitProgress(FName _attack, int32 _iBaseXP, int32 _iGainedXP);
    
    UFUNCTION(BlueprintCallable)
    UAttackProgressNotification* BPF_InitDiscovered(FName _attack);
    
    UAttackProgressNotification();
};


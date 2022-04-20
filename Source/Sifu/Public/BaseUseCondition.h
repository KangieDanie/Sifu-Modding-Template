#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EGuardType.h"
#include "EOrderType.h"
#include "ESpeedState.h"
#include "EFightingState.h"
#include "BaseUseCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBaseUseCondition : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsFulfilled();
    
    UFUNCTION(BlueprintPure)
    void GetSurroundingPlayersNumInRange(float _fRange, int32& _iOutPlayersInside, int32& _iOutTotalPlayers);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsTargetPlayingOrder(EOrderType _eOrderType, uint8& _uiOutOrderID) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsStaminaRatioBelow(float _fStaminaThreshold) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsHitted(EGuardType& _eOutGuardType);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsHealthRatioBelow(float _fHealthThreshold) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsDamageTakenRatioBelow(float _fDmgTakenThreshold, float _fTime) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAttackIncoming(float& _fOutTimeTillStrike) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasAttackTicket() const;
    
    UFUNCTION(BlueprintPure)
    ESpeedState BPF_GetTargetSpeedState() const;
    
    UFUNCTION(BlueprintPure)
    EFightingState BPF_GetTargetFightingState() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetHitCount(float _fTime, EGuardType _eGuardTypeFilter) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetDistFromTarget() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetDifficultyName() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetDifficultyLevelGauge() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetDamageTaken(float _fTime) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnFulfilled();
    
    UBaseUseCondition();
};


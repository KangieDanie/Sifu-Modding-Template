#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EHitDismissReason.h"
#include "BaseComponent.h"
#include "ImpactResult.h"
#include "ELimbs.h"
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "EAttackStates.h"
#include "AttackHitRequest.h"
#include "EActionType.h"
#include "EMovableType.h"
#include "AttackIKLimbProfiles.h"
#include "EDangerStates.h"
#include "AnimSyncContainer.h"
#include "AbsorbWindow.h"
#include "EChargeCapEndReason.h"
#include "InputAction.h"
#include "ComboAttack.h"
#include "AvoidWindow.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "HitBox.h"
#include "AttackComponent.generated.h"

class UIdleDB;
class AActor;
class AInteractiveMovable;
class AVitalPointActor;
class UPushObjectAnimRequest;
class UCurveFloat;
class UCombo;
class UComboManager;
class UEnvironmentalAttackDetectionDB;
class UTargetDB;
class URushAttackDB;
class UAnimSequence;
class UFocusDB;
class AThrowableActor;
class APushableActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackComponentOnDangerStateChanged, EDangerStates, _ePreviousDangerState, EDangerStates, _eNewDangerState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttackComponent_OnAttackLaunchedDynamic);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAttackComponent_OnAttackHitFilteredDynamic, const FAttackHitRequest&, _hitRequest, const FImpactResult&, _impactResult, AActor*, _hittedActor, EHitDismissReason, _eDismissReason);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackComponent_OnAttackChangeState, EAttackStates, _eNewState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttackComponent_OnAttackHitDynamic, const FAttackHitRequest&, _hitRequest, const FImpactResult&, _impactResult, AActor*, _hittedActor);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackComponentOnFocusPointsValueChanged, float, _fPrevious, float, _fNew);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackComponentOnMovableUsable, EMovableType, _eMovableType, bool, _bUsable);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackComponentOnChargedAttackLaunched, uint8, _attackOrderID, uint8, _uiLevel);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttackComponentOnChargedCapEnded, uint8, _attackOrderID, uint8, _uiLevel, EChargeCapEndReason, _eEndReason);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttackComponent_OnNewAttacksChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackComponent_OnTargetChange, EActionType, _eAction);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttackComponent_OnFocusMechanicStart);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackComponent_OnFocusMechanicValidated, AVitalPointActor*, _vitalPointSelected);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackComponent_OnFocusMechanicStop, bool, _bCancel);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackComponent_OnFocusMechanicUpdate, float, _fDeltaTime, float, _fRealTimeDeltaTime);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackComponent_OnFocusMechanicNewPointSelected, AVitalPointActor*, _previousVitalPointSelected, AVitalPointActor*, _vitalPointSelected);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttackComponentOnChargedCapStarted, uint8, _attackOrderID, uint8, _uiLevel, float, _fDuration);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAttackComponentOnChargedCapUpdate, uint8, _attackOrderID, uint8, _uiLevel, float, _fDt, float, _fCurrentRatioInChargingPhase);

UCLASS(BlueprintType)
class SIFU_API UAttackComponent : public UActorComponent, public IBaseComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnAttackChangeState m_OnAttackChangeState;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnAttackHitDynamic m_OnAttackHitDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnAttackHitFilteredDynamic m_OnAttackHitFilteredDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnAttackLaunchedDynamic m_OnAttackLaunchedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnNewAttacksChanged m_OnNewAttacksChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnTargetChange m_OnTargetChange;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponentOnMovableUsable OnMovableUsable;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponentOnDangerStateChanged OnDangerStateChanged;
    
    UPROPERTY(BlueprintReadWrite)
    FAnimSyncContainer m_TakedownDebugAnims;
    
    UPROPERTY(BlueprintReadWrite)
    FAnimSyncContainer m_EnvTakedownDebugAnim;
    
    UPROPERTY(EditAnywhere)
    FAttackIKLimbProfiles m_AttackIKProfiles[4];
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnFocusMechanicStart m_OnFocusMechanicStart;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnFocusMechanicValidated m_OnFocusMechanicValidated;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnFocusMechanicStop m_OnFocusMechanicStop;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnFocusMechanicUpdate m_OnFocusMechanicUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponent_OnFocusMechanicNewPointSelected m_OnFocusMechanicNewPointSelected;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponentOnFocusPointsValueChanged OnFocusPointsValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponentOnChargedCapStarted OnChargedCapStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponentOnChargedCapEnded OnChargedCapEnded;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponentOnChargedCapUpdate OnChargedCapUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FAttackComponentOnChargedAttackLaunched OnChargedAttackLaunched;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPushObjectAnimRequest> m_pushAnimRequest;
    
    UPROPERTY(EditAnywhere)
    UCombo* m_DefaultCombo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<InputAction> m_AttackActions;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UComboManager* m_ComboManager;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackReorientationDurationFromIdle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackReorientationDurationFromAttack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackReorientationDurationIfChangedDuringAttack;
    
    UPROPERTY(EditDefaultsOnly)
    UIdleDB* m_IdleDB;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvironmentalAttackDetectionDB* m_TakedownDB;
    
    UPROPERTY(EditAnywhere)
    float m_fEnterFightDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fExitFightDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fVirtualTargetAntiSpamRange;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_VirtualTargetRemapCurve;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_HitTargetBoneName;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, ELimbs> m_UpperLimbBoneNames;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketHigh;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketHighMiss;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketHighMissSide;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketMid1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketMidMiss;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketMidMissSide;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketMid2;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketLowLeft;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketLowMiss;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketLowMissSide;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocketLowRight;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AimIKCurveName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_FakeHipsBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UTargetDB* m_TargetDB;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StaminaConsumptionValues[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAttackHasImpactOnGuardGauge;
    
    UPROPERTY(EditAnywhere)
    float m_FreezeFrameNb[3];
    
    UPROPERTY(EditAnywhere)
    float m_ResilientFreezeFrameNb[3];
    
    UPROPERTY(EditAnywhere)
    float m_GuardFreezeFrameNb[3];
    
    UPROPERTY(EditDefaultsOnly)
    URushAttackDB* m_RushAttackDB;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFlatHitBoxesCapsuleHalfHeightFactorThresold;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_uiFlatHitBoxesControllerNatureMask;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDangerTimeOut;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DangerState)
    EDangerStates m_eDangerState;
    
public:
    UPROPERTY(EditAnywhere)
    float m_fMaxDistSnap;
    
    UPROPERTY(EditAnywhere)
    bool m_bDisableSnapWhenTargetInRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    
    UPROPERTY(Transient)
    TArray<UAnimSequence*> m_TakedownHistory;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanGuardBreakAfterDeflected;
    
    UPROPERTY(EditDefaultsOnly)
    UFocusDB* m_FocusDB;
    
    UFUNCTION(BlueprintCallable)
    void SetWantsComboRestart(bool _bWantsRestart);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetTarget(AActor* _target);
    
    UFUNCTION()
    void OnRep_DangerState(EDangerStates _ePreviousDangerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastOrderAttackTrackingOver(uint8 _uiOrderId);
    
    UFUNCTION(BlueprintPure)
    AActor* GetNextAttackTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ValidateFocus(AVitalPointActor* _vitalPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateLockMoveTarget(AActor* _currentAttacked);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StopFocus(bool _bCancel);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartFocus();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTargetForSlot(FName _BPTargetSlot, AActor* _target);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetServiceActive(EActionType _eActionType, bool _bActive);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveDuringAttacks(bool _bMove);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFocusPointsInfinite(bool _bInfinite);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetToDefaultCombo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideCombo(UCombo* _combo);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsPlayingAttack();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsFocusPointsInfinite() const;
    
    UFUNCTION(BlueprintPure)
    AVitalPointActor* BPF_GetVitalPointSelected() const;
    
    UFUNCTION(BlueprintPure)
    AInteractiveMovable* BPF_GetTempMovable(EActionType _eActionType) const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetTargetForSlot(FName _BPTargetSlot) const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetTargetForInput(InputAction _eInput) const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetTargetForAction(EActionType _eActionType, bool _bForceOutOfDate) const;
    
    UFUNCTION(BlueprintPure)
    UTargetDB* BPF_GetTargetDB() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> BPF_GetPotentialTargetsForAction(EActionType _eActionType);
    
    UFUNCTION(BlueprintPure)
    FHitBox BPF_GetNextActiveHitBox(bool _bIncludeActive, bool& _bSuccess, bool& _bOutMirror, float& _fOutDelay) const;
    
    UFUNCTION(BlueprintPure)
    ELimbs BPF_GetLimbFromBone(FName _boneName, bool _bMirror) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFocusTimeLeftInRatio() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFocusTimeLeft() const;
    
    UFUNCTION(BlueprintPure)
    UFocusDB* BPF_GetFocusDB() const;
    
    UFUNCTION(BlueprintPure)
    EDangerStates BPF_GetDangerState() const;
    
    UFUNCTION(BlueprintPure)
    AThrowableActor* BPF_GetCurrentThrowable() const;
    
    UFUNCTION(BlueprintPure)
    APushableActor* BPF_GetCurrentPushable() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentFocusPointsValue() const;
    
    UFUNCTION(BlueprintPure)
    FAvoidWindow BPF_GetCurrentAvoidWindow(bool& _bSuccess) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentAttackTimeLeft();
    
    UFUNCTION(BlueprintPure)
    EAttackStates BPF_GetCurrentAttackState() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentAttackRatio();
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetCurrentAttackName() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentAttackDuration();
    
    UFUNCTION(BlueprintPure)
    FComboAttack BPF_GetCurrentAttack(bool& _bSuccess) const;
    
    UFUNCTION(BlueprintPure)
    FAbsorbWindow BPF_GetCurrentAbsorbWindow(bool& _bSuccess) const;
    
    UFUNCTION(BlueprintPure)
    FHitBox BPF_GetBestActiveHitBox(bool& _bSuccess, bool& _bOutMirror) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsumeFocusPoints(float _fFocusPoints);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanConsumeFocusPoints(float _fFocusPointsNeeded) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddFocusPointRefillValue(float _fFocusPointsToAdd);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddFocusPointRefill(FSCUserDefinedEnumHandler _focusGainEnum);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAttackComponent();
    
    // Fix for true pure virtual functions not being implemented
};


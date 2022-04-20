#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIComponent.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "EAvoidType.h"
#include "HitRequest.h"
#include "TurnAnimationArray.h"
#include "HitDescription.h"
#include "ESCAICombatRolesChangeReason.h"
#include "ESCAICombatRoles.h"
#include "EAIContextualDefenseType.h"
#include "EGlobalBehaviors.h"
#include "EMcDominationGaugeSteps.h"
#include "EOrderState.h"
#include "AIPhaseNodeHardLink.h"
#include "EOrderType.h"
#include "VariableWeightEnumHandler.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "PhasesTransitionObjectCache.h"
#include "EDefenseTactics.h"
#include "AIPhaseNodeSoftLink.h"
#include "EAlertedReason.h"
#include "AIDefenseTargetAttackInfos.h"
#include "AIFightingComponent.generated.h"

class UObject;
class AActor;
class UAIFightingComponent;
class UAIPhaseTransition;
class UBlendSpace1D;
class UAIContextualDefense;
class UCombo;
class UOrderComponent;
class UFightingMovementComponent;
class UAttackDB;
class APathPatrol;
class UAvoidAbility;
class UAIPhaseScenario;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponentOnCombatRoleChangedDynamic, ESCAICombatRoles, NewCombatRole, ESCAICombatRolesChangeReason, ChangeReason);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFightingComponentOnComboStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponentOnOpponentAvoidedAttack, EAvoidType, _eAvoidType, const FHitRequest&, _hitRequest);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIFightingComponentOnEnemyRevivalDelegate, UAIFightingComponent*, Who);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFightingComponentOnComboFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponentOnStartFetchingObject, AActor*, _actor, float, _fetchDistance);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFightingComponentOnDefenseCancelled);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFightingComponentOnAICalledForHelp);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAIFightingComponentOnAIPhaseChangedDynamic, int32, _iPreviousPhase, int32, _iCurrentPhase, FName, _PhaseName);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponentOnStartThrowingObject, AActor*, _objectThrown, AActor*, _targetActor);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponentOnGlobalBehaviorChangedDelegate, EGlobalBehaviors, NewBehavior, const bool, FromDialog);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponentOnPostGlobalBehaviorChangedDelegate, EGlobalBehaviors, NewBehavior, const bool, FromDialog);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIFightingComponentOnSeenEnemyDeath, UAIFightingComponent*, Who);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIFightingComponentOnPrefightLowStructureStateChanged, bool, _bForcedLowStructure);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIFightingComponentOnKillSpare, UAIFightingComponent*, Who);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFightingComponentOnDefensePreparedDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFightingComponentOnDefenseStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFightingComponentOnDefenseFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIFightingComponentOnPendantChargesAdded, int32, _iNumOfCharges);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponent_OnEnemyOrderStateChanged, EOrderState, _eOrderState, EOrderType, _eOrderType);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIFightingComponentOnDeathCounterOnKilledChanged, int32, _iCounterDecrease, bool, _bReset);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIFightingComponentOnMCDominationStepChangedDelegate, EMcDominationGaugeSteps, _eNewStep);

UCLASS()
class SIFU_API UAIFightingComponent : public UAIComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnOpponentAvoidedAttack OnOpponentAvoidedAttack;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnComboFinished OnComboFinished;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnComboStarted OnComboStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnAICalledForHelp OnAICalledForHelp;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnAIPhaseChangedDynamic OnAIPhaseChangedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnStartFetchingObject OnStartFetchingObject;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnStartThrowingObject OnStartThrowingObject;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnCombatRoleChangedDynamic OnCombatRoleChangedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnGlobalBehaviorChangedDelegate OnGlobalBehaviorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnPostGlobalBehaviorChangedDelegate OnPostGlobalBehaviorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnSeenEnemyDeath OnSeenEnemyDeath;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnEnemyRevivalDelegate OnEnemyRevivalDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnKillSpare OnKillSpare;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnDefensePreparedDelegate OnDefensePreparedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnDefenseStarted OnDefenseStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnDefenseCancelled OnDefenseCancelled;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnDefenseFinished OnDefenseFinished;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnPendantChargesAdded OnPendantChargesAdded;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponent_OnEnemyOrderStateChanged m_OnEnemyOrderStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnDeathCounterOnKilledChanged OnDeathCounterOnKilledChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnPrefightLowStructureStateChanged OnPrefightLowStructureStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAIFightingComponentOnMCDominationStepChangedDelegate OnMCDominationStepChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 m_iDeathCounterDecreaseWhenKilled;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bDeathCounterResetWhenKilled;
    
private:
    UPROPERTY(EditAnywhere)
    float m_fChainedDodgeDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fLateralDodgeAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fMemoryValidity;
    
    UPROPERTY(EditAnywhere)
    float m_fPickupMaxDist;
    
    UPROPERTY(EditAnywhere)
    float m_fThreatMinDistForPickup;
    
    UPROPERTY(EditAnywhere)
    float m_fAlertPropagationDistance;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeAlerted;
    
    UPROPERTY(EditAnywhere)
    TArray<FVariableWeightEnumHandler> m_DisabledVariableWeightsOnSpawnerIdle;
    
    UPROPERTY(Replicated, Transient)
    uint8 m_uiIdleIndex;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_SurprisedAnimation[4];
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_HeavySurprisedAnimation[4];
    
    UPROPERTY(EditAnywhere)
    FTurnAnimationArray m_TurnAnimations[4];
    
    UPROPERTY(EditAnywhere)
    TArray<UBlendSpace1D*> m_AbandoningBlendSpaces;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fAbandoningPlayRateRange;
    
    UPROPERTY(Transient)
    FPhasesTransitionObjectCache m_PhaseTransitionObjects;
    
    UPROPERTY(Transient)
    TArray<UAIPhaseTransition*> m_CurrentPhaseTransitions;
    
    UFUNCTION()
    void OnTargetHitDuringAttack(const FHitDescription& _hitDescription);
    
public:
    UFUNCTION()
    void OnOrderTraversalEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnOrderGrabbedStarted(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnOrderGrabbedEnded(uint8 _iOrderID, UOrderComponent* _OrderComponent);
    
private:
    UFUNCTION()
    void OnOrderAvoidedStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnOrderAttackStarted(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
    UFUNCTION()
    void OnMoveStatusChanged(UFightingMovementComponent* _movementComponent);
    
public:
    UFUNCTION()
    void OnAIPhaseChangeSequenceFinished();
    
    UFUNCTION()
    void HittedDetection(const FHitDescription& _hitDescription);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnspawnCarriedProps();
    
    UFUNCTION(BlueprintCallable)
    EDefenseTactics BPF_TestContextualDefense(UAttackDB* _attackToTest);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SwitchToPhaseBySoftLink(const FAIPhaseNodeSoftLink& _phaseLink);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToPhaseByName(FName _name);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_SwitchToPhaseByHardLink(const FAIPhaseNodeHardLink& _phaseLink);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToPhase(int32 _iPhase);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToIdle(bool _bEnabledPerception);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToFriendly(const bool _bFromDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToCombatRole(ESCAICombatRoles _eNewRole);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToAbandoning(const bool _bFromDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnCarriedProps();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetStructureGaugeVisible(bool _bVisible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPerceptionEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPathPatrol(APathPatrol* _newpathPatrol);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetHealthGaugeVisible(bool _bVisible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDeathCounterResetWhenKilled(bool _bReset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDeathCounterDecreaseWhenKilled(int32 _iCount);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RespawnStartupWeapon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_ResetComboToDefault(FName _nameOfDifficultyLevel);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetAvoidAbilityToDefault();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveCarriedProps(int32 _iIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_PushContextualDefenseOverride(FName _overrideName, UAIContextualDefense* _contextualDefenseOverride, EAIContextualDefenseType _eType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopContextualDefenseOverride(FName _overrideName, EAIContextualDefenseType _eType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideCombo(FName _nameOfDifficultyLevel, UCombo* _combo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideAvoidAbility(const TSubclassOf<UAvoidAbility>& _avoidAbility);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsStructureGaugeVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInPrefightLowStructure() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInLastManPhase() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsHealthGaugeVisible() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_HasSpawnerGroupConfrontationDialog();
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasPathPatrol() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasAttackTicket() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetXPBonus();
    
    UFUNCTION(BlueprintPure)
    EDefenseTactics BPF_GetPreparedDefenseTactic() const;
    
    UFUNCTION(BlueprintPure)
    EAlertedReason BPF_GetLastAlertedReason() const;
    
    UFUNCTION(BlueprintPure)
    EGlobalBehaviors BPF_GetGlobalBehavior(bool _bWithTimer) const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetEnemy() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetDefenseTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetDefenseLastDefendedTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetCurrentPhase(FName& _outName, UAIPhaseScenario*& _outScenario) const;
    
    UFUNCTION(BlueprintPure)
    EDefenseTactics BPF_GetCurrentDefenseTactic() const;
    
    UFUNCTION(BlueprintPure)
    ESCAICombatRoles BPF_GetCurrentCombatRole() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> BPF_GetCarriedProps() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCarriedPendantCharges() const;
    
    UFUNCTION(BlueprintPure)
    UObject* BPF_GetBlackBoardValueAsObject(FName _key) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForgetEnemy();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnemyReactionBehavior(EGlobalBehaviors _eGlobalBehavior);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnemy(AActor* _Enemy, EGlobalBehaviors _eForcedDetectionReaction);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanTriggerSpare() const;
    
    UFUNCTION()
    void BeforeGhostDamagesReset();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAIFightingComponent();
};


#pragma once
#include "CoreMinimal.h"
#include "EFactionsEnums.h"
#include "BaseCharacter.h"
#include "TargetableActor.h"
#include "HittableActor.h"
//CROSS-MODULE INCLUDE: AIModule GenericTeamAgentInterface
#include "GenericTeamAgentInterface.h"
#include "InputAction.h"
#include "EFidgetMirroringTypes.h"
//CROSS-MODULE INCLUDE: SCCore SCGestureAndBlendProfile
#include "SCGestureAndBlendProfile.h"
//CROSS-MODULE INCLUDE: GameplayAbilities AbilitySystemInterface
#include "AbilitySystemInterface.h"
#include "EItemPowers.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "Engine/EngineTypes.h"
#include "HitDefenseResult.h"
#include "HitRequest.h"
#include "EALBinaryOperation.h"
#include "DamageInfos.h"
#include "EEquipmentSlot.h"
#include "HitDescription.h"
#include "InputContext.h"
#include "HandledWeaponInfo.h"
#include "EOrderType.h"
#include "PelvisDirectionComputationParams.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "EDangerStates.h"
#include "ECameraTeleportationRotationBehavior.h"
#include "EALPriority.h"
//CROSS-MODULE INCLUDE: SCCore SCGestureContainer
#include "SCGestureContainer.h"
#include "EPredictionBehavior.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "EFightingCharacterBPComponents.h"
#include "EQuadrantTypes.h"
#include "EHeight.h"
#include "ERelationshipTypes.h"
#include "EFallLevel.h"
//CROSS-MODULE INCLUDE: PhysicsCore EPhysicalSurface
#include "Chaos/ChaosEngineInterface.h"
#include "EMoveStatus.h"
#include "EAvoidType.h"
#include "ImpactResult.h"
#include "FightingCharacter.generated.h"

class AActor;
class UCameraComponentThird;
class USkeletalMeshComponent;
class UDeathDB;
class AInteractiveMovable;
class UCapsuleComponent;
class UCharacterHealthComponent;
class UPlayerFightingComponent;
class UAvailabilityLayerDB;
class UMaterialParameterCollection;
class UEffectData;
class UCharacterHitBoxComponent;
class UPhysicalAnimationComponent;
class UDefenseComponent;
class USCAbilitySystemComponent;
class UTargetableActorComponent;
class UAttackComponent;
class UBaseWeaponData;
class UHitComponent;
class UAIFightingComponent;
class UMessengerComponent;
class UReplayablePhysicsComponent;
class UMaterialInterface;
class UFightingCharAnimRepComponent;
class UReplayFightingCharacterComponent;
class UASMComponent;
class UOrderComponent;
class UPrimitiveComponent;
class UAvailabilityLayerData;
class UPlayerAnim;
class ABaseWeapon;
class UStatsComponent;
class UActorComponent;
class UVisibleWeaponData;
class AFightingCharacter;
class UAvoidPropertyDB;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightingCharacterOnEquipWeapon, bool, _bEquipmentSuccessful);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightingCharacterOnUnequipWeapon, bool, _bEquipmentSuccessful);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFightingCharacterOnEffectAddedOrRemoved, bool, _bAdded, UEffectData*, _effectData);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFightingCharacterOnAvoidCapsuleHitDynamic, const FHitResult&, _hitResult, const FHitRequest&, _hitRequest, const FHitDefenseResult&, _defenseResult);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFightingCharacterOnAvoidSuccessDynamic, FHitRequest, _hitRequest, FHitDefenseResult, _hitDefenseResult);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FFightingCharacterOnKilledSomething, AActor*, Victim, bool, _bIsOnlyAssist, bool, _bKillingBlow, AActor*, _Instigator, const FDamageInfos&, _damageInfos);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightingCharacterOnRecoveryFromDamageDealt, float, _fHealAmount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightingCharacterOnResilienceChanged, int32, _iNewResilience);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFightingCharacterOnLanding);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFightingCharacterOnFalling);
// , public IHittableActor, public IGenericTeamAgentInterface, public IAbilitySystemInterface
UCLASS()
class SIFU_API AFightingCharacter : public ABaseCharacter, public ITargetableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnEquipWeapon OnEquipWeapon;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnUnequipWeapon OnUnequipWeapon;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnAvoidCapsuleHitDynamic OnAvoidCapsuleHitDynamic;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerDB* m_availabilityLayerDB;
    
    UPROPERTY(EditAnywhere)
    FName m_AnimSyncBoneViewPoint;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFightingCharacterOnKilledSomething OnKilledSomething;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnAvoidSuccessDynamic OnAvoidSuccessDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnEffectAddedOrRemoved OnEffectAddedOrRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnRecoveryFromDamageDealt OnRecoveryFromDamageDealt;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnResilienceChanged OnResilienceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnLanding OnLanding;
    
    UPROPERTY(BlueprintAssignable)
    FFightingCharacterOnFalling OnFalling;
    
    UPROPERTY(EditAnywhere, Export)
    UCharacterHitBoxComponent* m_PushHitBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool m_bHasJustBeenHitted;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FHitDescription m_HittedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bAllowAutonomousAnimPoseTick;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDefenseComponent* m_DefenseComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Replicated, VisibleAnywhere)
    USCAbilitySystemComponent* m_AbilityComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTargetableActorComponent* m_TargetLocation;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPhysicalAnimationComponent* m_PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FName m_currentlyAttachedSocket;
    
private:
    UPROPERTY(Export)
    UAttackComponent* m_AttackComponent;
    
    UPROPERTY(Export, Replicated)
    UCameraComponentThird* m_Camera;
    
    UPROPERTY(EditAnywhere)
    UBaseWeaponData* m_DefaultHandWeapons;
    
    UPROPERTY(EditAnywhere)
    UBaseWeaponData* m_DefaultLegWeapons;
    
    UPROPERTY(Export)
    UHitComponent* m_HitComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPlayerFightingComponent* m_PlayerComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAIFightingComponent* m_AIComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCapsuleComponent* m_AvoidCapsule;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCapsuleComponent* m_HitCapsule;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCharacterHealthComponent* m_HealthComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UMessengerComponent* m_MessengerComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UReplayablePhysicsComponent* m_ReplayablePhysicsComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFightingCharAnimRepComponent* m_FightingCharAnimRepComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UReplayFightingCharacterComponent* m_ReplayFightingCharacterComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UASMComponent* m_ASMComponent;
    
    UPROPERTY(EditAnywhere)
    UDeathDB* m_DeathDB;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TransitionZoneId)
    uint8 m_uiTransitionZoneId;
    
    UPROPERTY(EditAnywhere)
    float m_fMinHeightForVisbilityTrace;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxHeightForVisbilityTrace;
    
    UPROPERTY(EditAnywhere)
    float m_PickUpAngle;
    
    UPROPERTY(EditDefaultsOnly, Replicated)
    bool m_bSpawnOccured;
    
    UPROPERTY(Transient)
    bool m_bReceivedSaveFailedCompensation;
    
    UPROPERTY(Transient)
    bool m_bCheckInventoryBug1_25;
    
    UPROPERTY(Replicated)
    uint8 m_uiPawnCounter;
    
    UPROPERTY(EditAnywhere)
    EFactionsEnums m_eFaction;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUpdateCollisionProfileOnBeginPlay;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* m_MaterialParameterCollectionGameplay;
    
protected:
    UPROPERTY(EditAnywhere)
    FName m_asTargetBones[3];
    
    UPROPERTY(EditAnywhere)
    float m_fCapsuleRadiusRatioForThrowableTargetLocation;
    
    UPROPERTY(EditAnywhere)
    FPelvisDirectionComputationParams m_defaultPelvisComputationParams;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* _target);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateMovementAnimation();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSuicide(bool _bForceUnrevivable);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetFlyMode(bool _bFlyModeActivated);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetFaction(uint8 _uiFaction);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPullOutWeapon(const FHandledWeaponInfo& HandledWeaponInfo);
    
private:
    UFUNCTION(Exec)
    void RemoveGameplayTag(const FString& _tag);
    
    UFUNCTION(Exec)
    void PushCamera(const FString& _inCameraName);
    
    UFUNCTION(Exec)
    void PopCamera();
    
public:
    UFUNCTION()
    void OnTakingOutWeaponOrderEnded(uint8 _uiOrderId, UOrderComponent* _orderComp);
    
private:
    UFUNCTION()
    void OnRep_TransitionZoneId();
    
public:
    UFUNCTION()
    void OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION()
    void OnEffectAddedOrRemovedInternalCallback(bool _bAdded, UEffectData* _effectDataAsset);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetFaction(uint8 _uiFaction);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRemoveEffect(UEffectData* _effectData, int64 _iRemovalTimeTick);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastLoadWeaponMesh(const FHandledWeaponInfo& HandledWeaponInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAddEffect(UEffectData* _effectData, int64 _iStartTimeTick);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastActivateRagdoll(bool _bActivate, float _fBlendWeight);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateCollision(const FString& _contextString, bool _bActivate, bool _bLetStaticMeshOn, bool _bBlockTargettedAttacks);
    
    UFUNCTION(BlueprintNativeEvent)
    void Hitted(const FHitDescription& _hit);
    
    UFUNCTION()
    void HandleSwapHand(EOrderType _ePreviousOrderType);
    
    UFUNCTION()
    void HandleEndComboForWeapon();
    
    UFUNCTION(BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerFightingComponent* GetPlayerComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UPhysicalAnimationComponent* GetPhysicalAnimationComponent();
    
    UFUNCTION(BlueprintPure)
    UDefenseComponent* GetDefenseComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAttackComponent* GetAttackComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAIFightingComponent* GetAiComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ComboStarted();
    
private:
    UFUNCTION(Exec)
    void ClearCameras();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TeleportForce(const FVector& _destLocation, const FRotator& _destRotation, bool bForce, bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TakeOutWeapon();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwapWeaponHandWithAnim(AActor* _actorToPickup, uint8 _uiPreviousOrderID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_SpawnFootStepDecal(UMaterialInterface* _decalMaterial, FVector _vSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsValidTarget(bool _bIsValidTarget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvincibility(bool _bIsInvincible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGuardGaugeInfinite(bool _bIsInfinite, bool _bRestoreGauge);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFaction(EFactionsEnums _eFaction);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveAnimInstanceReference();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreSavedAnimInstance();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetInputStack(const FString& _context);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_PushAvailabilityLayerContext(InputContext _eInputContext, EALPriority _eALPriority);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_PushAvailabilityLayer(const UAvailabilityLayerData* _layer, EALBinaryOperation _eBinaryOperation, InputContext _eContext, EPredictionBehavior _ePredictionBehavior, int32 _iLinkedLayerId, int32 _iPriority, int32 _iALContext);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopAvailabilityLayerContext(InputContext _eInputContext, int32 _iContextID);
    
    UFUNCTION(BlueprintCallable)
    uint8 BPF_PlayGestureOnCharacter(const FSCGestureContainer& _gestureContainer, bool _bLoop);
    
    UFUNCTION(BlueprintCallable)
    uint8 BPF_PlayGesture(FSCGestureAndBlendProfile _gesture, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bLoop, EFidgetMirroringTypes _eMirrorHandling);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PickUpObject(AInteractiveMovable* _object, bool _bMirrorPickup);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyTeleport(bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior);
    
    UFUNCTION(BlueprintCallable)
    void BPF_MulticastRemoveEffect(UEffectData* _effectData, float _fPredictionTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_MulticastAddEffect(UEffectData* _effectData, float _fPredictionTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchImpact(float _fDamage, bool _bLethal, float _fStunTime);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsGuardGaugeInfinite();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsGetUpDone();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsDown() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsBestActionAvailable(InputAction _eAction) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsActorInAttackRange(const AActor* _actor) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasWeaponEquipped(ABaseWeapon*& _outWeaponEquipped, bool _bIgnoreUnusableWeapon) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasValidTarget();
    
    UFUNCTION(BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* BPF_GetSkeletalMeshEquipment(EEquipmentSlot _eEquipmentSlot);
    
    UFUNCTION(BlueprintPure)
    ABaseWeapon* BPF_GetPickedUpWeapon() const;
    
    UFUNCTION(BlueprintPure)
    AInteractiveMovable* BPF_GetPickedUpObject() const;
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetLeftStickDirection(bool _bFallbackToCameraDir) const;
    
    UFUNCTION(BlueprintPure)
    UHitComponent* BPF_GetHitComponent() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetHeightFromFeet(const FVector& _vLocToCheck) const;
    
    UFUNCTION(BlueprintPure)
    UCharacterHealthComponent* BPF_GetHealthComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetDirToTarget(bool _bCanUseCamera, const AActor* _specifiedTarget, bool _bFallbackToDefaultTarget) const;
    
    UFUNCTION(BlueprintPure)
    UDeathDB* BPF_GetDeathDB() const;
    
    UFUNCTION(BlueprintPure)
    EDangerStates BPF_GetDangerState() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCurrentTotalResilience() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponentThird* BPF_GetCameraThird() const;
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* BPF_GetBPComponent(EFightingCharacterBPComponents _eComponent);
    
    UFUNCTION(BlueprintPure)
    UASMComponent* BPF_GetASMComponent() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerAnim* BPF_GetAnimGraph() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UEffectData*> BPF_GetAllActiveEffects();
    
    UFUNCTION(BlueprintPure)
    USCAbilitySystemComponent* BPF_GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_DrawDecalToRenderTarget(UMaterialInterface* _decalMaterial, float _fSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    
    UFUNCTION(BlueprintPure)
    EQuadrantTypes BPF_ComputeQuadrant(AActor* _towardSpecificTarget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CharacterFullySpawned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UpdateTargettedByThrowable(bool _bIsTargetted, EHeight _eTargettingHeight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UpdateTargettedByPushable(bool _bIsTargetted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UpdateTargettedByGrab(bool _bIsTargetted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ThrowableHit(const FHitDescription& _hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_TargetChanged(AActor* _old);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartPowerFX(EItemPowers _eFxType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Spawn(bool m_bRespawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetCharacterHidden(bool _bHidden);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReviveStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReviveInProgressPercent(float _fPercent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReviveCancelPercent(float _fPercent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PickUpWeaponStart(UVisibleWeaponData* _handledWeaponData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PerfectLinkWoOMissed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _eNewRelation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRecoveryFromDamageDealt(float _fHealthRecovered);
    
   /* UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnLanding(bool _bProceduralLanding, EFallLevel _eFallLevel, TEnumAsByte<EPhysicalSurface> _eSurface, const FVector& _vImpactpoint);*/
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEffectStart(UEffectData* _effectData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEffectEnd(UEffectData* _effectData, bool _bInterrupted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDeath();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAvoidSuccessful_PredictionServer(const FHitRequest& _inHitRequest, const FHitDefenseResult& _defenseInfos);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAvoidSuccessful(const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAvoidCapsuleHit(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_MoveStatusChanged(EMoveStatus _MoveStatus);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_JustBeenHitted(const FHitDescription& _HittedDescription);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Hit(const FHitDescription& _hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_EndRevive(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndPowerFX(EItemPowers _eFxType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_EndBeingRevived(bool _bSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DropWeaponStart(UVisibleWeaponData* _handledWeaponData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DoParry(EQuadrantTypes _eParryQuadrantRegardingTarget, EQuadrantTypes _eParryQuadrant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DoDodge(FVector _vDodgeDirection);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DodgeSuccess(AFightingCharacter* _attacker);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DoChangeQuadrant(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DoAvoid(EAvoidType _eAvoidType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DoAbsorb();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_BeingRevivedStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Avoided(EAvoidType _eAvoid, const UAvoidPropertyDB* _AvoidPropertyDB);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_AttackStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_AttackEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Absorb_PredictionServer(const FHitResult& _hitResult, const FHitRequest& _inHitRequest, const FImpactResult& _result, const FHitDefenseResult& _defenseInfos);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Absorb(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintEventParrySuccessful(const FHitResult& _hitResult, const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintEventParried(FVector _vImpactPosition, AFightingCharacter* _ParryInstigator);
    
private:
    UFUNCTION(Exec)
    void AddGameplayTag(const FString& _tag);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFightingCharacter();
    
    // Fix for true pure virtual functions not being implemented
};


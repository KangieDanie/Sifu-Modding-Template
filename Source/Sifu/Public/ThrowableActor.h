#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveMovable.h"
#include "EThrowableState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EDebugTargetState.h"
#include "EBounceType.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: SCCore SCCollisionResponsePreset
#include "SCCollisionResponsePreset.h"
#include "EHeight.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "HitBox.h"
#include "ThrowableActor.generated.h"

class UThrowObjectAnimRequest;
class UBoxComponent;
class AActor;
class USceneComponent;
class USphereComponent;
class UPhysicalActorDependencyComponent;
class UThrowableObjMovementComponent;
class UHitBoxComponent;
class UAIPerceptionStimuliSourceComponent;
class UReplayablePhysObjectComponent;
class UReplayableDestructionComponent;
class UCurveFloat;
class UThrowableData;
class AFightingCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FThrowableActorOnStateUpdated, EThrowableState, _eNewState);

UCLASS()
class SIFU_API AThrowableActor : public AInteractiveMovable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FThrowableActorOnStateUpdated OnStateUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsPickedupFromSpawning;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_sBoneToAttachToWhenThrowing;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UThrowObjectAnimRequest> m_ThrowAnimRequest;
    
    UPROPERTY(EditAnywhere)
    FVector m_vThrowStartBoxExtent;
    
    UPROPERTY(Transient)
    TArray<AActor*> m_aHitActorToRemove;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* m_BoxColl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* m_BreakableProximity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USceneComponent* m_ThrowPivot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPhysicalActorDependencyComponent* m_PhysicalActorDependencyComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fDistToThrow;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UThrowableObjMovementComponent* m_MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionStimuliSourceComponent* m_PerceptionStimuli;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UReplayablePhysObjectComponent* m_ReplayablePhysObjectComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UReplayableDestructionComponent* m_ReplayableDestructionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHitBoxComponent* m_throwHitBox;
    
    UPROPERTY(VisibleAnywhere)
    float m_fTimeIgnoreFloor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fOnTargetHitSpeedReduction;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fMissingSpeedReduc;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fMissedDistance;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bApplyGravityWhenFlyingFreely;
    
    UPROPERTY(VisibleAnywhere)
    EBounceType m_eBounceType;
    
    UPROPERTY(BlueprintReadWrite)
    EBounceType m_eCurrentBounceType;
    
    UPROPERTY(VisibleAnywhere)
    UCurveFloat* m_BounceBackAngle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FFloatRange m_BounceBackRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bSimulatePhysicOnSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileAtRest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileAtRestOnBreakable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileThrown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileThrownNoCol;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithoutTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileSnapped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileAfterHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfileOnBounce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_ColProfilePickedUp;
    
    UPROPERTY(VisibleAnywhere)
    EHeight m_eTargettedHeight;
    
    UPROPERTY(VisibleAnywhere)
    EHeight m_eAltTargettedHeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fHeightLimitForFootAnimation;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bUseAlternateHeightForFreeThrow;
    
    UPROPERTY(VisibleAnywhere)
    float m_fOffsetDistTrace;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fDistToCheckCollOnPathFreely;
    
    UPROPERTY(VisibleAnywhere)
    float m_fSoundNoiseRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bDestroyActorOnBreak;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UThrowableData> m_throwableData;
    
private:
    UPROPERTY(VisibleInstanceOnly)
    EThrowableState m_eState;
    
    UFUNCTION()
    void OnWakeUp(bool _bWakesUp);
    
    UFUNCTION()
    void CheckStabilisationForPhysicOptimization();
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_UseFootToThrow(const AFightingCharacter* _Instigator) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ThrowFreely(AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ThrowAtTarget(AActor* _target, AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetupThrow(AFightingCharacter* _Instigator, AActor* _target, FVector _vThrowDirection);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetThrowableState(EThrowableState _eNewState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideThrowableData(TSubclassOf<UThrowableData> _newThrowableData);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsTooCloseToThrow(const AActor* _Instigator, const AActor* _target) const;
    
    UFUNCTION(BlueprintPure)
    EThrowableState BPF_GetThrowableState() const;
    
    UFUNCTION(BlueprintPure)
    UThrowableData* BPF_GetThrowableData() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetTarget(const AFightingCharacter* _character) const;
    
    UFUNCTION(BlueprintPure)
    EDebugTargetState BPF_GetDebugTargetState(const AFightingCharacter* _character, float& _fOutDist) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OverrideBounceType(const AActor* _Instigator, const AActor* _target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnThrown();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetHitBox(FHitBox& _outHitbox, AActor* _actorHit);
    
    AThrowableActor();
};


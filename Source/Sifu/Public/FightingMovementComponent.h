#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine CharacterMovementComponent
#include "GameFramework/CharacterMovementComponent.h"
#include "BaseComponent.h"
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "EMoveStatus.h"
#include "EFallLevel.h"
#include "ESpeedState.h"
#include "ETraversalPhase.h"
#include "FightingMovementComponent.generated.h"

class UBaseMovementDB;
class UTraversalDB;
class UAnimSequence;
class UEffectData;
class AActor;

UCLASS()
class SIFU_API UFightingMovementComponent : public UCharacterMovementComponent, public IBaseComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fPenetrationExpulsionSpeed;
    
private:
    UPROPERTY(VisibleAnywhere)
    FVector m_vVelocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eMoveStatus;
    
    UPROPERTY(EditAnywhere)
    UBaseMovementDB* m_BaseMovementDB;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverlapOnRemoveCollision;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bPushForceScaledToMassInNavWalking: 1;
    
    UPROPERTY(EditAnywhere)
    float m_fInitialPushForceFactorInNavWalking;
    
    UPROPERTY(EditAnywhere)
    float m_fPushForceFactorInNavWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFlyModeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFlyModeRushSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTraversalDB> m_TraversalInfosDB;
    
    UPROPERTY()
    TArray<UAnimSequence*> m_LastDodgeAnims;
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPopDesyncFromServer(uint8 _uiResyncID);
    
    UFUNCTION()
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintPure)
    FVector GetRealVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetRealSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRealHorizontalVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetRealHorizontalSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveStatus(EMoveStatus _eMoveStatus);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetBaseMovementDBToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushBlockV2(AActor* _blocker);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopBlockV2(AActor* _blocker);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideBaseMovementDB(UBaseMovementDB* _newBaseMovementDB);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsRushing() const;
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetLastWantedDir() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState& _eSpeedState) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveMinSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveMaxSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintPure)
    EFallLevel BPF_GetFallLevel() const;
    
    UFUNCTION(BlueprintPure)
    ETraversalPhase BPF_GetCurrentTraversalPhase() const;
    
    UFUNCTION(BlueprintPure)
    ESpeedState BPF_GetCurrentSpeedState() const;
    
    UFightingMovementComponent();
    
    // Fix for true pure virtual functions not being implemented
};


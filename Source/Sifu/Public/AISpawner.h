#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EFactionsEnums.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EGlobalBehaviors.h"
#include "EPatrolLaunchMethod.h"
#include "EFirstSpawnMethod.h"
#include "CarriedProps.h"
#include "IdleAnimAndTransition.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "AISpawner.generated.h"

class UAIPhaseScenario;
class USceneComponent;
class ABaseCharacter;
class AAISpawner;
class UAIFightingComponent;
class APathPatrol;
class ABaseWeapon;
class UAIIdleDB;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISpawnerOnLineEnded, int32, DialogNodeId);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISpawnerAIDownDelegateMulticast, AAISpawner*, Spawner);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAISpawnerOnPatrolCompleted, UAIFightingComponent*, AI, APathPatrol*, Patrol);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAISpawnerOnGlobalBehaviorChanged, ABaseCharacter*, Character, EGlobalBehaviors, NewBehavior);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAISpawnerOnDialogCompleted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISpawnerOnGenericDialogEvent, FName, EventTriggered);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAISpawnerOnDialogCut);

UCLASS()
class SIFU_API AAISpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAISpawnerAIDownDelegateMulticast AIDownDelegateMulticast;
    
    UPROPERTY(BlueprintAssignable)
    FAISpawnerOnPatrolCompleted OnPatrolCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FAISpawnerOnGenericDialogEvent OnGenericDialogEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAISpawnerOnDialogCompleted OnDialogCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FAISpawnerOnDialogCut OnDialogCut;
    
    UPROPERTY(BlueprintAssignable)
    FAISpawnerOnLineEnded OnLineEnded;
    
    UPROPERTY(BlueprintAssignable)
    FAISpawnerOnGlobalBehaviorChanged OnGlobalBehaviorChanged;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bForcedPreFightLookAtTarget;
    
    UPROPERTY(EditInstanceOnly)
    AActor* m_ForcedPreFightLookAtTarget;
    
    UPROPERTY(EditInstanceOnly)
    APathPatrol* m_pathPatrol;
    
    UPROPERTY(EditAnywhere)
    EPatrolLaunchMethod m_ePatrolLaunchMethod;
    
    UPROPERTY(EditAnywhere)
    UAIPhaseScenario* m_PhaseScenario;
    
    UPROPERTY(EditAnywhere)
    EFactionsEnums m_eFaction;
    
    UPROPERTY(EditAnywhere)
    float m_fRespawnTime;
    
    UPROPERTY(EditAnywhere)
    float m_fSpawnDelay;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanRespawn;
    
    UPROPERTY(EditAnywhere)
    bool m_bLowStructureOnSpawn;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsLoneWolf;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iSoundTensionLevelOverride;
    
    UPROPERTY(EditInstanceOnly)
    FName m_VoiceVariationSwitchOverride;
    
    UPROPERTY(EditAnywhere)
    int32 m_iChargesToAddWhenKilled;
    
    UPROPERTY(EditAnywhere)
    int32 m_iDeathCounterDecreaseWhenKilled;
    
    UPROPERTY(EditAnywhere)
    bool m_bDeathCounterResetWhenKilled;
    
    UPROPERTY(EditAnywhere)
    EFirstSpawnMethod m_eFirstSpawnMethod;
    
    UPROPERTY(Export)
    USceneComponent* m_RootComp;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FCarriedProps> m_carriedProps;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY()
    FName m_CarriedWeaponPoolName;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bKeepIdleAnimDuringAlertedDialogs;
    
    UPROPERTY()
    TArray<FIdleAnimAndTransition> m_IdleAndExitAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UAIIdleDB* m_AIIdleDB;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FAnimContainer m_AlertedAnimation;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<float> m_rawCustomPrimitiveData;
    
private:
    UFUNCTION()
    void OnAiBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<ABaseWeapon> GetCarriedWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_WantsSpawn();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnSpawnAIDelayed();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartAssociatedPatrolOnSpawnedAI();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpawningClass(TSubclassOf<ABaseCharacter> _class);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPhaseScenario(UAIPhaseScenario* _scenario);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanRespawn(bool _canRespawn);
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasSpawnedAI() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ABaseCharacter> BPF_GetSpawningClass() const;
    
    UFUNCTION(BlueprintPure)
    ABaseCharacter* BPF_GetSpawnedAI() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetCarriedWeaponPoolName() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FCarriedProps> BPF_GetCarriedProps() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRespawnFinished(AActor* _ActorAIRespawned);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnIADown(AActor* _ActorAI);
    
    AAISpawner();
};


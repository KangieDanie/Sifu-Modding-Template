#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EGlobalBehaviors.h"
#include "SpawnerGroupSoundData.h"
#include "SCImpostorForSave.h"
#include "AISituationNamedActor.h"
#include "EAlertLevel.h"
#include "AIPhaseTransitionData.h"
#include "EFightingState.h"
#include "AISituationActor.generated.h"

class ABaseCharacter;
class AAISituationActor;
class UAIFightingComponent;
class ALockableDoor;
class USCSaveGameComponent;
class ASpawnerGroup;
class AAISpawner;
class AFightingCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISituationActorOnSituationActivated, AAISituationActor*, SituationChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISituationActorOnSituationResolved, AAISituationActor*, SituationChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAISituationActorOnAnyAiBehaviorChanged, AAISituationActor*, SituationChanged, const UAIFightingComponent*, AI, EGlobalBehaviors, NewBehavior);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISituationActorOnSituationSpawnedDynamic, AAISituationActor*, SituationChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISituationActorOnAISpawned, ABaseCharacter*, _character);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISituationActorOnAIDeath, ABaseCharacter*, _character);

UCLASS()
class SIFU_API AAISituationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAISituationActorOnSituationActivated OnSituationActivated;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationActorOnSituationResolved OnSituationResolved;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationActorOnAnyAiBehaviorChanged OnAnyAiBehaviorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationActorOnSituationSpawnedDynamic OnSituationSpawnedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationActorOnAISpawned OnAISpawned;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationActorOnAIDeath OnAIDeath;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bHasActiveLDVisibilityOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    USCSaveGameComponent* m_SaveComponent;
    
private:
    UPROPERTY(EditInstanceOnly)
    TArray<ASpawnerGroup*> m_AssociatedSpawnerGroups;
    
    UPROPERTY(EditInstanceOnly)
    TArray<ALockableDoor*> m_AssociatedLockableDoors;
    
    UPROPERTY(EditInstanceOnly)
    TArray<AActor*> m_PositioningPOIs;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bIsLastManAllowed;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bForceLastMan;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iMinKillBeforeLastMan;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly)
    int32 m_iLastManGaugeIncrementValue;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly)
    int32 m_iLastManMaxOccuranceCount;
    
    UPROPERTY(EditAnywhere)
    FSpawnerGroupSoundData m_SoundData;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bRepeatBarksWhenExhausted;
    
    UPROPERTY(SaveGame)
    TArray<FName> m_SpawnerGroupClearedPathName;
    
    UPROPERTY(SaveGame)
    TArray<FSCImpostorForSave> m_ImpostorToSpawnOnSaveLoaded;
    
    UPROPERTY(SaveGame)
    bool m_bSpawnRequestedOnSaveLoaded;
    
    UPROPERTY(SaveGame)
    int32 m_iCurrentLastManOccuranceCount;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bAutoSpawnedOnSaveLoaded;
    
    UPROPERTY(SaveGame)
    EGlobalBehaviors m_eBehaviorToSetOnSpawn;
    
    UPROPERTY(SaveGame)
    TWeakObjectPtr<AActor> m_targetForHostileBehaviorsOnSpawn;
    
    UFUNCTION()
    void OnUpdatedFromSaveCallback();
    
public:
    UFUNCTION(BlueprintPure)
    static FAISituationNamedActor Conv_NameToAISituationNamedActor(FName _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnSpawnSituation();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToFriendly(bool _bFriendly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToAbandoning();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnSituation(EGlobalBehaviors _eBehaviorToSetOnSpawn, AActor* _targetForHostileBehaviors, bool _bForce);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetSpawnersUsedCount(bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetSpawnersUsed(TArray<AAISpawner*>& _outSpawners, bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetSpawnerGroupsUsed(TArray<ASpawnerGroup*>& _outSpawnerGroups) const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetNamedActor(const FAISituationNamedActor& _namedActor) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetAis(TArray<UAIFightingComponent*>& _outAiComponents, bool _bIncludeAlertedSpawners, bool _bAppendToArray, bool _bIncludeAbandonningAIs) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableHitOnAI(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeAiPerception(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddNamedActor(AActor* _actor, FName _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateLDVisibilityOverride(bool _bVisibility);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStartAIPhaseChanged(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnInteractiveDialogInterrupted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEndAIPhaseChanged(AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex, FName _currentPhaseName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIPhaseChangeSequenceFinished(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIFightingStateChanged(AFightingCharacter* _fightingChar, EFightingState _ePreviousFightingState, EFightingState _eNewFightingState);
    
private:
    UFUNCTION()
    void AlertLevelChangedCallback(EAlertLevel _eNewLevel);
    
public:
    AAISituationActor();
};


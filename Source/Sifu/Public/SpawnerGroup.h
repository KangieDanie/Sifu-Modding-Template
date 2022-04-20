#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine DataTableRowHandle
#include "Engine/DataTable.h"
#include "SpawnerGroupLayer.h"
#include "EEnemyPresenceKnownType.h"
#include "EGlobalBehaviors.h"
#include "EJoinDialogActors.h"
#include "SpawnerGroup.generated.h"

class UNavigationQueryFilter;
class ASpawnerGroup;
class AAISpawner;
class UAIFightingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerGroup_SituationChangeDelegateDyn, ASpawnerGroup*, _spawnerGroup);

UCLASS()
class SIFU_API ASpawnerGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnerGroup_SituationChangeDelegateDyn m_SituationChangeDelegateDyn;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<AAISpawner*> m_Spawners;
    
private:
    UPROPERTY()
    TArray<FSpawnerGroupLayer> m_SpawningLayers;
    
    UPROPERTY(EditInstanceOnly)
    TArray<ASpawnerGroup*> m_groupsToAlert;
    
    UPROPERTY(Replicated, Transient)
    TArray<TWeakObjectPtr<AAISpawner>> m_SpawnersUsed;
    
    UPROPERTY(EditInstanceOnly)
    FDataTableRowHandle m_AlertedStateDialogSequenceRowHandle;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bAssignRolesDynamically;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bUseDefaultReal;
    
    UPROPERTY(EditInstanceOnly)
    EJoinDialogActors m_eJoinDialogActorsOnStart;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UNavigationQueryFilter> m_dialogNavigationQueryFilter;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bLookAtEnabledDuringDialog;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bSkipSuspiciousOnDetection;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bOverrideThreateningActions;
    
    UPROPERTY(EditInstanceOnly)
    uint32 m_uiThreateningActionsMask;
    
    UPROPERTY(EditInstanceOnly)
    EEnemyPresenceKnownType m_eMCPresenceKnownType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, bool _bSkipBark) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnActors(int32 _iLevel, int32 _index, bool _bForce);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRemainingAICount(bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetRemainingAI(TArray<UAIFightingComponent*>& _outAiComponents, bool _bAppendToArray, bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASpawnerGroup();
};


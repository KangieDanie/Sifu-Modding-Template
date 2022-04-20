#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReplayAnimGraphVersioning.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "SCPoolableActorComponent.h"
#include "ReplayReplicatedStateMachine.h"
#include "ReplayReplicatedAnimInstanceAssetPlayers.h"
//CROSS-MODULE INCLUDE: SCCore SCAnimInstanceRef
#include "SCAnimInstanceRef.h"
#include "AnimInstanceReplicationComponent.generated.h"

class USCAnimInstance;

UCLASS()
class SIFU_API UAnimInstanceReplicationComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    FReplayAnimGraphVersioning m_ReplicatedAnimGraphVersion;
    
    UPROPERTY(Replicated, Transient)
    TArray<FReplayReplicatedStateMachine> m_ReplicatedStateMachineSnapshots;
    
    UPROPERTY(Replicated, Transient)
    TArray<FReplayReplicatedAnimInstanceAssetPlayers> m_ReplicatedAnimInstancePlayerAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<USCAnimInstance>> m_AllowedReplicatedTypes;
    
    UPROPERTY(Replicated, Transient)
    TArray<FSCAnimInstanceRef> m_ReplicatedSubAnimInstances;
    
    UPROPERTY(Transient)
    TArray<FSCAnimInstanceRef> m_ScrubSnapshotOnlySubAnimInstances;
    
    UPROPERTY(Replicated, Transient)
    USCAnimInstance* m_AnimInstance;
    
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAnimInstanceReplicationComponent();
    
    // Fix for true pure virtual functions not being implemented
};


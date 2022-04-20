#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "EImposterSpawnTransformType.h"
#include "SCSpawnImpostorInfos.h"
#include "SCCharacterImpostor.generated.h"

class ASCCharacter;
class USCRagdollConfigDB;
class USkeletalMeshComponentBudgeted;
class USCStreamingActorComponent;
class UAnimInstance;

UCLASS()
class SCCORE_API ASCCharacterImpostor : public ASCActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EImposterSpawnTransformType m_SpawnTransformType;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    USCRagdollConfigDB* m_RagdollConfig;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponentBudgeted* m_Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USCStreamingActorComponent* m_StreamingComponent;
    
    UPROPERTY(Replicated, Transient)
    UAnimInstance* m_AnimInstance;
    
    UFUNCTION(NetMulticast, Reliable)
    void OnMimicCharacterReplicateMulticast(const FSCSpawnImpostorInfos& _spawnInfos);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_MimicCharacter(ASCCharacter* _characterToMimic);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASCCharacterImpostor();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine PoseSnapshot
#include "ReplayablePhysicsComponent.generated.h"

class USkeletalMeshComponent;

UCLASS()
class SIFU_API UReplayablePhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_LastPoseSnapshot)
    FPoseSnapshot m_lastPoseSnapshot;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_skeletalMeshComp;
    
private:
    UFUNCTION()
    void OnRep_LastPoseSnapshot();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UReplayablePhysicsComponent();
};


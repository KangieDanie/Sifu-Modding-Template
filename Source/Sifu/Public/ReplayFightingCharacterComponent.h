#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ReplayCameraTransform.h"
#include "ReplayFightingCharacterComponent.generated.h"

class AReplayingCamera;

UCLASS()
class SIFU_API UReplayFightingCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_CameraTransform)
    FReplayCameraTransform m_CameraTransform;
    
    UPROPERTY(Transient)
    AReplayingCamera* m_CameraDummy;
    
    UFUNCTION()
    void OnRep_CameraTransform();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UReplayFightingCharacterComponent();
};


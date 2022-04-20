#pragma once
#include "CoreMinimal.h"
#include "ReplayableStaticObjectComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "ReplayablePhysObjectComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS()
class SIFU_API UReplayablePhysObjectComponent : public UReplayableStaticObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_IsSimulatingPhysics)
    bool m_bIsReplaySimulatingPhysics;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bDebugDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceNetUpdateOnBodyAwake;
    
    UFUNCTION()
    void OnRep_IsSimulatingPhysics();
    
public:
    UFUNCTION()
    void OnComponentWake(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION()
    void OnComponentSleep(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDetach(bool _bReplaySimulatePhysics);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAttachTo(AActor* _skActor, FName _socketName, FVector _position, FRotator _rotation);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UReplayablePhysObjectComponent();
};


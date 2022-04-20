#include "ReplayablePhysObjectComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;

void UReplayablePhysObjectComponent::OnRep_IsSimulatingPhysics() {
}

void UReplayablePhysObjectComponent::OnComponentWake(UPrimitiveComponent* _wakingComponent, FName _boneName) {
}

void UReplayablePhysObjectComponent::OnComponentSleep(UPrimitiveComponent* _wakingComponent, FName _boneName) {
}

void UReplayablePhysObjectComponent::MulticastDetach_Implementation(bool _bReplaySimulatePhysics) {
}

void UReplayablePhysObjectComponent::MulticastAttachTo_Implementation(AActor* _skActor, FName _socketName, FVector _position, FRotator _rotation) {
}

void UReplayablePhysObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplayablePhysObjectComponent, m_bIsReplaySimulatingPhysics);
}

UReplayablePhysObjectComponent::UReplayablePhysObjectComponent() {
    this->m_bIsReplaySimulatingPhysics = false;
    this->m_bDebugDisabled = false;
    this->m_bForceNetUpdateOnBodyAwake = true;
}


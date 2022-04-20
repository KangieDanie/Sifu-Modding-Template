#include "ClusterActor.h"

class AActor;

void AClusterActor::BPF_SpawnActorFromMesh() {
}

void AClusterActor::BPF_MakeNoise(AActor* _noiseSource, FVector _vLocationOverride) {
}

FVector AClusterActor::BPF_GetImpulseVector() const {
    return FVector{};
}

AClusterActor::AClusterActor() {
    this->m_fTimeBeforeSpawningThrowable = 0.20f;
    this->m_bCanBeTargeted = false;
    this->m_fSoundNoiseRadius = 1000.00f;
}

